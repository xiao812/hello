/**********************************************
 * 找出字符串中第一个只出现一次的字符
 *********************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s;
    int i,index;
    i = index = 0;
    char array[128] = {0};

    s = (char *)malloc(sizeof(char) * 1000);
    gets(s);
    while(*(s+i) != '\0')
    {
        index = (int)(*(s+i));
        array[index]++; 
        i++;
    }
    i = 0;
    while(*(s+i) != '\0')
    {
        index = (int)(*(s+i));
        if(array[index] == 1)
        {
            putchar((char)index);
            return 0;
        }
        i++;
    }
    printf("-1");
    return 0;
}