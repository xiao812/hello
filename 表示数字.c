//将一个字符串中所有出现的数字前后加上符号“*”，其他字符保持不变
//输入: Jkdi234klowe90a3  输出:Jkdi*234*klowe*90*a*3*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void Print(char *s)
{
    int i;
    i = 0;
    printf("%d\n",strlen(s));
    for(i = 0; i <= strlen(s)-1; i++)
    {
        if(i == 0)
        {
            if(isdigit(*(s+i)) != 0 && isdigit(*(s+i+1)) == 0)
            {
                printf("*");
                printf("%c",*(s+i));
                printf("*");
            }
            else if (isdigit(*(s+i)) != 0 && isdigit(*(s+i+1)) != 0)
            {
                printf("*");
                printf("%c",*(s+i));
            }
            else 
            {
                printf("%c",*(s+i));
            }
        }
        else 
        {
            if(isdigit(*(s+i)) == 0)
            {
                printf("%c",*(s+i));
            }
            else if ((isdigit(*(s+i-1)) == 0) && (isdigit(*(s+i+1)) != 0))
            {
                printf("*");
                printf("%c",*(s+i));
            }
            else if ((isdigit(*(s+i-1)) == 0) && (isdigit(*(s+i+1)) == 0))
            {
                printf("*");
                printf("%c",*(s+i));
                printf("*");
            }
            else if(isdigit(*(s+i+1)) == 0)
            {
                printf("%c",*(s+i));
                printf("*");
            }
            else 
            {
                printf("%c",*(s+i));
            }

        }
    }

}

int main(void)
{
    char *s;
    s = (char *)malloc(sizeof(char) * 100);
    gets(s);
    Print(s);

    return 0;
}

