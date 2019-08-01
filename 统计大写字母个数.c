//找出给定字符串中大写字符(即'A'-'Z')的个数
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *s;
    int count = 0;
    s = (char *)malloc(sizeof(char) * 300);
    gets(s);
    for(int i = 0; i < strlen(s); i++)
    {
        if((*(s+i)>='A') &&(*(s+i)<='Z'))
            count++;
    }

    printf("大写字母个数: %d",count);

    return 0;
}