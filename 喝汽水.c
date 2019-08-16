/***************************************************************************************************
 * 某商店规定：三个空汽水瓶可以换一瓶汽水。
 * 输入文件最多包含10组测试数据，每个数据占一行，
 * 仅包含一个正整数n（1<=n<=100），表示小张手上的空汽水瓶数。n=0表示输入结束，你的程序不应当处理这一行
 ***************************************************************************************************
#include <stdio.h>
#include <stdlib.h>

int count(int num)
{
    if(num == 1)
    {
        return 0;
    } else if(num == 2)
    {
        return 1;
    }
    else 
        return num/3 + count(num/3 + num%3);
}

int main(void)
{
    int array[10] = {0};
    int i = 0;
    for(i = 0; i <= 9; i++)
    {
        scanf("%d",&array[i]);
        if(array[i] == 0)
        {
            break;
        }
    }
    for(i = 0; i <= 9; i++)
    {
        if(array[i] == 0)
        {
            break;
        }
        printf("%d\n",count(array[i]));
    }


    return 0;
}