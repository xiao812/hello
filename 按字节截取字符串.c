//编写一个截取字符串的函数，输入为一个字符串和字节数，输出为按字节截取的字符串。但是要保证汉字不被截半个，如"我ABC"4，应该截为"我AB"，输入"我ABC汉DEF"6，应该输出为"我ABC"而不是"我ABC+汉的半个"。 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s;
    int i,n,OUT,count;
    OUT = count =  0;
    s =  (char *)malloc(sizeof(char) * 100);
    gets(s);
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        if((*(s+i) &0x80) != 0)
        {
            count++;
            //一个汉字占四个字符，若一个汉字占两个char,改为2
            if(count % 4 != 0)
            {
                OUT = 1;
            }
            else 
            {
                OUT = 0;
            }
        }
    }
    if(OUT = 0)
    {
        *(s+n) = '\0';
    }
    else
    {
        *(s+n-1) = '\0';
    }
    printf("%s",s);
    return 0;
}


