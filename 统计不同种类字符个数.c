/**************************************************************
 *输入一行字符，分别统计出包含英文字母、空格、数字和其它字符的个数。
 *************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *s;
    s = (char *)malloc(sizeof(char) * 100);
    gets(s);
    int i,count1 , count2, count3, count4;
    i = count1 = count2 = count3 = count4 = 0;
    while(*(s+i) != '\0')
    {
        if(isalpha(*(s+i)) != 0)
        {
            count1++;
        }
        else if(isdigit(*(s+i)) != 0)
        {
            count2++;
        }
        else if(*(s+i) == ' ')
        {
            count3++;
        }
        else
        {
            count4++;
        }
        i++;
    }
    printf("%d %d %d %d",count1, count2, count3, count4);

    return 0;
}