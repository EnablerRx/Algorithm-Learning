/*
** ���������ľ��룺
** ����һ��ֱ��ѭ������ ����ʱ�䳬��
** ����������ٳ����п��� �ڴ泬��
** ������������ÿ��������ʼ��ľ��룬���������̾���
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
