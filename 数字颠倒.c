#include <stdio.h>
#include <stdlib.h>

char transform(int a)
{
    switch(a)
    {
        case 1: return '1';
                break;
        case 2: return '2';
                break;
        case 3: return '3';
                break;
        case 4: return '4';
                break;
        case 5: return '5';
                break;
        case 6: return '6';
                break;
        case 7: return '7';
                break;
        case 8: return '8';
                break;
        case 9: return '9';
                break;
        default: return '0';
    }
}
int main(void)
{
    int a;
    scanf("%d",&a);
    char c[100];
    int i = 0;
    while(a>0)
    {
        c[i] = transform(a%10);
        a /= 10;
        i++;
    }
    for(int j = 0; j < i;j++)
    {
        printf("%c",c[j]);
    }
    
    return 0;
}