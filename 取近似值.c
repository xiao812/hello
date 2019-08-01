//写出一个程序，接受一个正浮点数值，输出该数值的近似整数值。如果小数点后数值大于等于5,向上取整；小于5，则向下取整
#include <iostream>
using namespace std;
int main(void)
{
     float a;
     cin >> a;
     if(a < 0.5)
     {
         cout << 0 << endl;
     }
     else if (a <= 1)
     {
         cout << 1 << endl;
     }
     else
     {
     if((a - int(a)) >= 0.5)
     {
         cout << int(a)+1 << endl;
     }
     else
     {
         cout << int(a) << endl;
     }}
    
    return 0;
}

//更优解法 直接int(a+0.5)