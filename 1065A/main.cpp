/*
** 注意溢出的情况就行，其他情况正常比较，溢出分两种情况：
** 1. A > 0,B > 0, Sum = A + B 正溢出,溢出后的值Sum <= 0;
** 2. A < 0,B < 0, Sum = A + B 负溢出,溢出后的值Sum >= 0;
*/
#include <iostream>

using namespace std;

int main()
{
    long long int a=0,b=0,c=0,sum=0;
    int t=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%lld %lld %lld",&a,&b,&c);
        sum=a+b;//需要加一个sum，溢出才知道
        if((a>0)&&(b>0)&&(sum<=0)){
            printf("Case #%d: true",i);
        }else if((a<0)&&(b<0)&&(sum>=0)){
            printf("Case #%d: false",i);
        }
        else if((a+b)>c){
            printf("Case #%d: true",i);
        }else{
            printf("Case #%d: false",i);
        }
        if(i!=t){
            printf("\n");
        }
    }
    return 0;
}
