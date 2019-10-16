#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

int main()
{
    int a=0,b=0;
	double c=0;
    int hour=0,minu=0,second=0;
    scanf("%d%d",&a,&b);
    c=b-a;
    c=round(c/100);
    second=(int)c%60;
    c/=60;
    minu=(int)c%60;
    c/=60;
    hour=(int)c%60;
    printf("%02d:%02d:%02d",hour,minu,second);
    return 0;
}

