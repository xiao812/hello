/*******************************************************************
 *任意一个偶数（大于2）都可以由2个素数组成，组成偶数的2个素数有很多种情况，
 *本题目要求输出组成指定偶数的两个素数差值最小的素数对
 *******************************************************************/
#include <stdio.h>
#include <stdio.h>
#include <math.h>

int judge(int num);
int main(void)
{
    int i,n;

    scanf("%d",&n);
    for(i = n/2; i>= 2; i--)
    {
        if(judge(i) && judge(n-i))
        {
            printf("%d\n%d\n",i,n-i);
            break;
        }
    }
    return 0;
}

int judge(int num)
{
    int i;
    for(i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}