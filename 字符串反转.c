//接受一个字符串，然后输出该字符串反转后的字符串
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    char *p;
    p = (char *)malloc(sizeof(char) * 100);
    scanf("%s",p);
    int i = 0;
    for(i = strlen(p)-1;i >= 0; i--)
    {
        printf("%c",p[i]);
    }
    
    return 0;
}

//注意scanf不接受空格 gets可以接收空格