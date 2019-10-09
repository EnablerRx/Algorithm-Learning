#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

struct person{
    string name;
    int intime;
    int outtime;
};
int cmp(person a,person b){
    return a.intime<b.intime;//按从小到大排序
}
int cmp2(person a,person b){
    return a.outtime>b.outtime;//从大到小排序
}

int main()
{
    int M;
    int intemp,outtemp;
    scanf("%d",&M);
    struct person A[M];
    int a,b,c;
    /*输入*/
    for(int i=0;i<M;i++){
        intemp=0;
        outtemp=0;
        cin>>A[i].name;
        scanf("%d:%d:%d",&a,&b,&c);
        A[i].intime=c+b*60+a*3600;
        scanf("%d:%d:%d",&a,&b,&c);
        A[i].outtime=c+b*60+a*3600;
    }
    /*计算解锁人*/
    sort(A,A+M,cmp);
    cout << A[0].name;
    printf(" ");
    sort(A,A+M,cmp2);
    cout << A[0].name;

//    printf("%d",A[0].intime);
    return 0;
}
