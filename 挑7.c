/****************************************************************************
 *输出7有关数字的个数，包括7的倍数，
 *还有包含7的数字（如17，27，37...70，71，72，73...）的个数
 ***************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int judge(int num);
int main(void)
{   
    int i,count;
    count = 0;
    int n; 
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        if(judge(i))
        {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
int judge(int num)
{
    int temp = 0;
    if(num % 7 == 0)
    {
        return 1;
    }
    {
        while(num > 0)
        {
            temp = num % 10;
            if(( temp % 7 == 0) && (temp > 0))
               return 1;
            num /= 10;
        }
        return 0;
    }
}