/**************************************************************************************
 * 请编写一个函数（允许增加子函数），计算n x m的棋盘格子（n为横向的格子数，m为竖向的格子数）
 * 沿着各自边缘线从左上角走到右下角，
 * 总共有多少种走法，要求不能走回头路，即：只能往右和往下走，不能往左和往上走。
 **************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int Factorial(int n);

int main(void)
{
    int m, n, count;
    m = n = 0;
    scanf("%d", &m);
    scanf("%d", &n);
    count = Factorial(m+n)/(Factorial(n) * Factorial(m));
    printf("%d",count);

    return 0;
}

int Factorial(int n)
{
    int i,sum;
    sum = 1;
    for(i = 1; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}

/*******************************************************************************************
另外一种解法
#include <iostream>
using namespace std;
int func(int m, int n) {
    if (m == 0 || n == 0) {
        return 1;
    }
    return func(m, n - 1) + func(m - 1, n);
}
int main() {
    int m, n;
    while (cin >> m >> n) {
        cout << func(m, n) << endl;
    }
 
    return 0;
}
********************************************************************************************/