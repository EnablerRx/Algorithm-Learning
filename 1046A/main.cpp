/*
** 计算两点间的距离：
** 方法一：直接循环叠加 运行时间超了
** 方法二：穷举出所有可能 内存超了
** 方法三：计算每个点与起始点的距离，则能求出最短距离
*/
#include <iostream>
#include <stdio.h>


using namespace std;

int main()
{
    int n=0,m=0,a=0,e=0,f=0,maxdis=0,result=0,temp=0;
    scanf("%d",&n);
    int dis[n+2];
    for(int i=2;i<=n+1;i++){
        scanf("%d",&a);
        maxdis+=a;
        dis[1]=0;
        dis[i]=dis[i-1]+a;
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d %d",&e,&f);
        if(e>f){
            temp=e;
            e=f;
            f=temp;
        }
        result=dis[f]-dis[e];
        if((maxdis-result)<result){
            result=maxdis-result;
        }
        printf("%d",result);
        if(i!=m-1){
            printf("\n");
        }
    }
    return 0;
}
