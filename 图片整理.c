/***********************************************************
 *Lily上课时使用字母数字图片教小朋友们学习英语单词，
 *每次都需要把这些图片按照大小（ASCII码值从小到大）排列收好。
 **********************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int i,j,n;
    char tempc;
    char *s;
    s = (char *)malloc(sizeof(char) * 100);
    gets(s);
    n = strlen(s) -1;
    for(i = 0; i <= n-1; i++)
    {
        for(j= i+1; j<= n; j++)
        {
            if(*(s+i) > *(s+j))
            {
                tempc = *(s+i);
                *(s+i) = *(s+j);
                *(s+j) = tempc;
            }
        }
    }
    printf("%s",s);

    return 0;
}