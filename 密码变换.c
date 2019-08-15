/*******************************************************************************
 * 1--1， abc--2, def--3, ghi--4, jkl--5, mno--6, pqrs--7, tuv--8 wxyz--9, 0--0
 * 密码中没有空格，而密码中出现的大写字母则变成小写之后往后移一位
 *******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char change(char a);
int main(void)
{
    int i = 0;
    char *s;
    s = (char *)malloc(sizeof(char) * 100);
    gets(s);
    while(*(s+i)!= '\n')
    {
        *(s+i) = change(*(s+i));
        i++;
    }
    printf("%s",s);

    return 0;
}

char change(char a)
{
    if(a == 'Z')
    {
        return 'a';
    }
    else if(isupper(a) != 0)
    {
        return (a+33);
    }
    else if(islower(a) != 0)
    {
        if(a <= 'c')
            return '2';
        else if(a<= 'f')
            return '3';
        else if(a<= 'i')
            return '4';
        else if(a<= 'l')
            return '5';
        else if(a<='o')
            return '6';
        else if(a<='s')
            return '7';
        else if(a<='v')
            return '8';
        else if(a<='z')
            return '9';
    }
    else 
        return a;
}