/******************************************************************************************
*Catcher 是MCA国的情报员，他工作时发现敌国会用一些对称的密码进行通信，
*比如像这些ABBA，ABA，A，123321，但是他们有时会在开始或结束时加入一些无关的字符以防止别国破解。
*比如进行下列变化 ABBA->12ABBA,ABA->ABAKK,123321->51233214　。
*因为截获的串太长了，而且存在多种可能的情况（abaaab可看作是aba,或baaab的加密形式），
*Cathcer的工作量实在是太大了，他只能向电脑高手求助，你能帮Catcher找出最长的有效密码串吗？
*******************************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Count(char *s);
int main(void)
{
    int count = 0;
    char *s;
    s = (char *)malloc(sizeof(char) * 100);
    gets(s);
    count = Count(s);
    printf("effective char is %d.\n",count);

    return 0;
}

int Count(char *s)
{
    int i,j,count1,maxcount1,count2,maxcount2;
    i = j = count1 = maxcount1 = count2 = maxcount2 = 0;

    for(i = 0; i <= (strlen(s) - 1)/2;  i++)
    {
        while((i - j) >= 0)
        {
            if(*(s+i-j) == *(s+i+j))
            {
                count1++;
                j++;
            }
            else
            {
                if(count1 > maxcount1)
                {
                    maxcount1 = count1;
                }
                j = 0;
                count1 = 0;
                break;
            }
        }
        if(count1 > maxcount1)
            maxcount1 = count1;
        j = 0;
        count1 = 0;
    }
    for(i = 0; i <= (strlen(s) - 1)/2;  i++)
    {
        while((i - j) >= 0)
        {
            if(*(s+i-j) == *(s+i+j+1))
            {
                count2++;
                j++;
            }
            else
            {
                if(count2 > maxcount2)
                {
                    maxcount2 = count2;
                }
                j = 0;
                count2 = 0;
                break;
            }
        }
        if(count2 > maxcount2)
            maxcount2 = count2;
        j = 0;
        count2 = 0;
    }
    printf("maxcount1: %d\n",maxcount1);
    printf("maxcount2: %d\n",maxcount2);
    maxcount1 = 2 *(maxcount1 -1) + 1;
    maxcount2 = 2 * maxcount2;
    return maxcount1 > maxcount2? maxcount1:maxcount2;
}