/******************************************************************************
 * 自守数是指一个数的平方的尾数等于该数自身的自然数。
 * 例如：25^2 = 625，76^2 = 5776，9376^2 = 87909376。请求出n以内的自守数的个数
 *****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int judge(int num);
int main(void)
{
    int n,count,i;
    count = 0;
    scanf("%d",&n);
    for(i=0; i <=n; i++)
    {
        if(judge(i))
            count++;
    }

    printf("%d",count);
    return 0;
}

int judge(int num)
{
    int count,temp;
    count = 0;
    temp = num;

    while(temp>0)
    {
        count++;
        temp/=10;
    }

    if((num*num-num) % ((int)pow(10,count)) == 0)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}