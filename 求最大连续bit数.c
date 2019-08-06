//求一个byte数字对应的二进制数字中1的最大连续数，例如3的二进制为00000011，最大连续2个1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void trans(int n, char *s)
{
    int i = 0;
    while(n > 0)
    {
        *(s+i) = (char)('0' + n % 2);
        i++;
        n /= 2;
    }
    *(s+i) = '\0';
}

void reverse(char *s)
{
    int i,j;
    j = strlen(s);
    char temp;
    for(i = 0; i <= j/2; i++)
    {
        temp = *(s+i);
        *(s + i) = *(s + j -1 -i);
        *(s + j -1 -i) = temp;
    }
}

int cout(char *s)
{
    char *s1;
    int count,i,max;
    max = i = count = 0;
    s1  = s;
    while(1)
    {
        if(*(s1+i) == '1')
        {
            count++;
            i++;
            if(*(s1+i) == '\0')
                break;
        }
        else 
        {
            i++;
            if(count > max)
            {
                max = count;
                count = 0;
            }
            if(*(s1+i) == '\0')
                break;
        }
    }
    // 应对全1的情况
    return max>count?max:count;
}


int main(void)
{
    int n;
    char *s;
    s = (char *) malloc(sizeof(char));
    scanf("%d",&n);
    trans(n,s);
    reverse(s);
    printf("%s\n",s);
    printf("%d\n",cout(s));
    return 0;
}

