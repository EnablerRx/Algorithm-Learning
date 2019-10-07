/*
    正负应当分开计算，因为越负数越大
*/
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

//struct coupons{
//    int product;
//    int value;
//}coupons[10010];
int cmp(int a, int b){
    return a>b;//降序
}

int main()
{
    int product_num;        // coupons's num
    int product[100010];     // coupons
    int value_num;          // the num of product's value
    int value[100010];       // values
    int max_local;
    int max_total=0,max_total1=0,max_total2=0;
    int value_bool[100010];          // value 0 is ok for use
    int max_index=0;                // max local index for every circle
    // input nums
    scanf("%d",&product_num);
    for(int i=0;i<product_num;i++){
        scanf("%d",&product[i]);
    }
    scanf("%d",&value_num);
    for(int i=0;i<value_num;i++){
        scanf("%d",&value[i]);
    }
    sort(product,product+product_num,cmp);
    sort(value,value+value_num,cmp);

    for(int i=0;i<product_num;i++){
        max_local=0;
        for(int j=0;j<value_num;j++){
            //printf("%d",j);
//            printf("product=%d\n",product[i]);
//            printf("value=%d\n",value[j]);
//            printf("%d",value_bool[j]);
            if((product[i]>0)&&(value[j]>0)){
//                if((product[i]!=value[j])&&(product[i]*value[j]>max_local)&&(value_bool[j]==0)){
                if((product[i]*value[j]>max_local)&&(value_bool[j]==0)){
                    max_local=product[i]*value[j];
                    max_index=j;
                    //printf("%d\n",max_total);
                }
            }
        }
        if(max_local>0){
            max_total1+=max_local;
            value_bool[max_index]=1;
        }
        //printf("%d\n",max_total);
    }
//    printf("%d\n",max_total1);
//    for(int i=0;i<value_num;i++){
//        printf("value_bool=%d\n",value_bool[i]);
//    }
    for(int i=product_num-1;i>=0;i--){
        max_local=0;
        for(int j=value_num-1;j>=0;j--){
//            printf("product=%d\n",product[i]);
//            printf("value=%d\n",value[j]);
//            printf("%d",value_bool[j]);
            if((product[i]<0)&&(value[j]<0)){
//                printf("product=%d\n",product[i]);
//                printf("value=%d\n",value[j]);
//                printf("%d",value_bool[j]);
//                if((product[i]!=value[j])&&((product[i]*value[j])>max_local)&&(value_bool[j]==0)){
                if(((product[i]*value[j])>max_local)&&(value_bool[j]==0)){
                    max_local=product[i]*value[j];
                    max_index=j;
//                    printf("max_local=%d\n",max_local);
                    //printf("%d\n",max_total);
                }
            }
        }
//        printf("max_local=%d\n",max_local);
        if(max_local>0){
            max_total2+=max_local;
            value_bool[max_index]=1;
        }
//        for(int i=0;i<value_num;i++){
//            printf("value_bool=%d\n",value_bool[i]);
//        }
        //printf("%d\n",max_total);
    }
//    printf("%d\n",max_total2);
    max_total=max_total1+max_total2;
    printf("%d",max_total);

//    for(int i=0;i<product_num;i++){
//        printf("%d",product[i]);
//    }
    return 0;
}

