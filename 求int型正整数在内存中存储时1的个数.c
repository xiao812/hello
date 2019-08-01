//输入一个int型的正整数，计算出该int型数据在内存中存储时1的个数。
#include <stdio.h>
#include <stdlib.h>

int cat(int a)
{
    int sum = 0;
    if(a == 0)
    {
        return 0;
    }
    else if (a == 1)
    {
        return 1;
    }
    else 
    { 
        if((a % 2) == 0)
        {
            sum = sum + 0 + cat(a/2);
        }
        else 
        {
            sum = sum + 1 + cat(a/2);
        }
    }
    
    return sum;
}


int main(void)
{
    int a;
    scanf("%d",&a);
    int count = 0;
    count = cat(a);
    printf("%d",count);
    
    return 0;
}

//更好的解法： 利用   n&(n-1) 每次去掉最后一位的1