#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;
struct num{
    int number=0;
    int times=0;
};

int cmp(num a,num b){
    return a.times>b.times;//从大到小排序
}

int main()
{
    int m=0,n=0;
    scanf("%d%d",&m,&n);
    int matri[m*n];
    struct num record[m*n];
    int ptr=0;
    int flag;
    for(int i=0;i<m*n;i++){
        scanf("%d",&matri[i]);
    }
    for(int i=0;i<m*n;i++){
        flag=0;
        for(int j=0;j<ptr;j++){
            if(matri[i]==record[j].number){
                flag=1;
                record[j].times++;
            }
        }
        if(flag==0){
            record[ptr].number=matri[i];
            record[ptr].times++;
            ptr++;
        }
    }
//    for(int i=0;i<ptr;i++){
//        printf("%d ",record[i].number);
//        printf("%d ",record[i].times);
//        printf("\n");
//    }
    sort(record,record+ptr,cmp);
    printf("%d",record[0].number);
//    for(int i=0;i<m*n;i++){
//        printf("%d",matri[i]);
//    }
    return 0;
}
