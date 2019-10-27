/*
**
**本题可用散列的知识求解
**
**注意输出结果的指数从大到小排列
**
*/
#include <iostream>
#include <algorithm>

using namespace std;
struct numb{
    double exp;
    double base;
};
int cmp(numb a,numb b){
    return a.exp>b.exp;
}

int main()
{
    numb num1[11];
    numb num2[11];
    numb result[150];
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lf %lf",&num1[i].exp,&num1[i].base);
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%lf %lf",&num2[i].exp,&num2[i].base);
    }
    int num=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            result[num].base=num1[i].base*num2[j].base;
            result[num].exp=num1[i].exp+num2[j].exp;
            //printf("%lf %lf ",result[num].exp,result[num].base);
            num++;
        }
    }
    for(int i=0;i<num-1;i++){
        for(int j=i+1;j<num;j++){
            if(result[i].base!=0){
                if(result[j].exp==result[i].exp){
                    result[i].base+=result[j].base;
                    result[j].base=0;
                }
            }
        }
    }
//    for(int i=0;i<num;i++){
//        printf("%lf %lf",result[i].exp,result[i].base);
//    }
    sort(result,result+num,cmp);
    int record=0;
    for(int i=0;i<num;i++){
        if(result[i].base!=0){
            record++;
        }
    }
    printf("%d",record);
    for(int i=0;i<num;i++){
        if(result[i].base!=0){
            printf(" %.0lf %.1lf",result[i].exp,result[i].base);
        }
    }
    return 0;
}
