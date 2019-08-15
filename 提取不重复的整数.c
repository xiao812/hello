/************************************************************************
 * 输入一个int型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。
 ***********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    int num,i,temp;
    scanf("%d",&num);
    i = 0;
    int a[10] = {0};
    char *s;
    s = (char *)malloc(sizeof(char) * 100);
    while(num > 0)
    {
        temp = num % 10;
        if(a[temp] == 0)
        {   
            *(s+i) = (char)(temp+'0');
            i++;
            a[temp] = 1;
        }
        num /= 10;       
    }
    *(s+i) = '\0';

    printf("%s",s);

    return 0;
}