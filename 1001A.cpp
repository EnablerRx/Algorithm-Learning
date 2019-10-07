#include <stdio.h>

int main()
{
    int a, b, total=0;
    int result[10];
    int index=0;
    int flag=0;//判断是否为负数，是为1
    for(int i=0;i<10;i++)
        result[i]=0;
    scanf("%d%d",&a, &b);
    total=a+b;
    if(total<0){
        flag=1;
        total=-total;
    }
    if(total==0){
        printf("%d",total);
    }
    while(total){
        result[index]=total%10;
        total=total/10;
        index++;
    }
    int first=(index)%3;
    if(flag==1)
        printf("-");
    for(int i=0;i<first;i++){
        printf("%d",result[index-i-1]);
    }
    if((index!=first)&&(first!=0)){
        printf(",");
    }
    int num=0;
    for(int i=first;i<index;i++){
        printf("%d",result[index-i-1]);
        num++;
        while((num==3)&&(i!=index-1)){
            printf(",");
            num=0;
        }
    }
    return 0;
}
