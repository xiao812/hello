//密码强度等级
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int length_scores(char *s);
int alpha_scores(char *s);
int digit_scores(char *s);
int others_scores(char *s);
int bonus_scores(int num2, int num3, int num4);

int main(void)
{
    int num1, num2, num3, num4, num5, scores;
    num1 = num2 = num3 = num4 = num5 = scores = 0;
    char *s;
    s = (char *)malloc(sizeof(char) * 100);
    gets(s);
    num1 = length_scores(s);
    num2 = alpha_scores(s);
    num3 = digit_scores(s);
    num4 = others_scores(s);
    num5 = bonus_scores(num2, num3, num4);
    scores = num1 + num2 + num3 + num4 + num5;
    if(scores >= 90)
        printf("VERY_SECURE");
    else if(scores >= 80)
        printf("SECURE");
    else if(scores >= 70)
        printf("VERY_STRONG");
    else if(scores >= 60)
        printf("STRONG");
    else if(scores >= 50)
        printf("AVERAGE");
    else if(scores >= 40)
        printf("WEAK");
    else 
        printf("VERY_WEAK");
    return 0;
}     


int length_scores(char *s)
{
    int length;
    length = strlen(s);
    if(length <= 4)
        return 5;
    else if(length <= 7)
        return 10;
    else 
        return 25; 
}

int alpha_scores(char *s)
{
    int flag1, flag2 ,i;
    flag1 = flag2 = i = 0;
    for(i = 0; i <= strlen(s) - 1; i ++)
    {
        if(islower(*(s+i)) != 0)
        {
            flag1 = 1;
            break;
        }
    }
    for(i = 0; i <= strlen(s) - 1; i ++)
    {
        if(isupper(*(s+i)) != 0)
        {
            flag2 = 1;
            break;
        }
    }
    if(flag1 == 0 && flag2 == 0)
    {
        return 0;
    } else if (flag1 == 1 && flag2 == 1)
    {
        return 20;
    }
    else 
        return 10;
}

int digit_scores(char *s)
{
    int nums_count, i;
    nums_count = i = 0;
    for(i = 0; i < strlen(s) - 1; i++)
    {
        if(isdigit(*(s+i)) != 0)
        {
            nums_count++;
        }
    }
    if(nums_count == 0)
        return 0;
    else if(nums_count == 1)
        return 10;
    else 
        return 20;
}

int others_scores(char *s)
{
    int nums_count, i;
    nums_count = i = 0;
    for(i = 0; i < strlen(s) -1; i++)
    {
        if(isalpha(*(s+i)) == 0)
        {
            if(isdigit(*(s+i)) == 0)
            {
                nums_count ++;
            }
        }
    }
    if(nums_count == 0)
        return 0;
    else if(nums_count == 1)
        return 10;
    else 
        return 25;
}

int bonus_scores(int num2, int num3, int num4)
{
    int nums = 0;
    if(num2 > 0 && (num3 == 10))
    {
        nums += 2;
    } 
    if (num2 > 0 && (num3 == 10) && num4 > 0)
    {
        nums += 3;
    }

    if (num2 > 0 && (num3 == 20) && num4 > 0)
    {
        nums += 5;
    }

    return nums;

}