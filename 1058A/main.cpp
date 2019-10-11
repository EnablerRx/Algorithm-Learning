/*
** 注意int的越界问题
** 注意进位数的归属问题
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    long long a1=0,a2=0,a3=0,b1=0,b2=0,b3=0,result1=0,result2=0,result3=0;
    int count1=0,count2=0;
    scanf("%lld.%lld.%lld",&a1,&a2,&a3);
    scanf("%lld.%lld.%lld",&b1,&b2,&b3);
    result3=(a3+b3)%29;
    count1=(a3+b3)/29;
    result2=(count1+a2+b2)%17;      //这里出错了
    count2=(a2+b2+count1)/17;       //这里出错了
    result1=count2+a1+b1;
    printf("%lld.%lld.%lld",result1,result2,result3);
    return 0;
}
