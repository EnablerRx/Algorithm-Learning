/*注意数据溢出问题*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    long long int a,b,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld%lld%lld",&a,&b,&c);
        if((a+b)>c)
            printf("Case #%d: true",i+1);
        else
            printf("Case #%d: false",i+1);
        if(i!=(n-1)){
            printf("\n");
        }
    }
    return 0;
}
