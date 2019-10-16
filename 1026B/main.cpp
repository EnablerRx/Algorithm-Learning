#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

int main()
{
    int a=0,b=0,c=0;
    int hour=0,minu=0,second=0;
    scanf("%d%d",&a,&b);
    c=b-a;
    c/=100;
    second=round(c%60);
    c/=60;
    minu=c%60;
    c/=60;
    hour=c%60;
//    hour=c/3600;
//    minu=
    printf("%d:%d:%d",hour,minu,second);
    return 0;
}
