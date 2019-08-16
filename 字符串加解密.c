/********************************************************************************************************
 * 1、对输入的字符串进行加解密，并输出。
 * 2加密方法为：
 * 当内容是英文字母时则用该英文字母的后一个字母替换，同时字母变换大小写,如字母a时则替换为B；字母Z时则替换为a；
 * 当内容是数字时则把该数字加1，如0替换1，1替换2，9替换0；其他字符不做变化。
 * 3、解密方法为加密的逆过程。
 *********************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void encrypt(char *s);
void decrypt(char *s);

int main(void)
{
    char *s1, *s2;
    s1 = (char *)malloc(sizeof(char) * 100);
    s2 = (char *)malloc(sizeof(char) * 100);
    gets(s1);
    gets(s2);

    encrypt(s1);
    decrypt(s2);

    return 0;
}

void encrypt(char *s)
{
    int i = 0;
    char tempc;
    while(*(s+i) != '\0')
    {
        if(isdigit(*(s+i)) != 0)
        {
            if(*(s+i) == '9')
            {
                putchar('0');
            }
            else 
            {
                tempc = (char)(*(s+i)+1);
                putchar(tempc);   
            }
        }
        else if(isupper(*(s+i)) != 0)
        {
            if(*(s+i) == 'Z')
            {
                putchar('a');
            }
            else 
            {
                tempc = (char)(*(s+i)+33);
                putchar(tempc);
            }
        }
        else if(islower(*(s+i)) != 0)
        {
            if(*(s+i) == 'z')
            {
                putchar('A');
            }
            else 
            {   
                tempc = (char)(*(s+i)-31);
                putchar(tempc);
            }
        }
        else
        {
            putchar(*(s+i));
        }
        i++;
    }
    putchar('\n');
}

void decrypt(char *s)
{
    int i = 0;
    char tempc;
    while(*(s+i) != '\0')
    {
        if(isdigit(*(s+i)) != 0)
        {
            if(*(s+i) == '0')
            {
                putchar('9');
            }
            else 
            {
                tempc = (char)(*(s+i)-1);
                putchar(tempc);   
            }
        }
        else if(islower(*(s+i)) != 0)
        {
            if(*(s+i) == 'a')
            {
                putchar('Z');
            }
            else 
            {
                tempc = (char)(*(s+i)-33);
                putchar(tempc);
            }
        }
        else if(isupper(*(s+i)) != 0)
        {
            if(*(s+i) == 'A')
            {
                putchar('z');
            }
            else 
            {
                tempc = (char)(*(s+i)+31);
                putchar(tempc);
            }
        }
        else 
        {
            putchar(*(s+i));
        }
        i++;
    }
    putchar('\n');
}