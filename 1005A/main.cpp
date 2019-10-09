#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
//    int N[1010];
    string str;
    cin>>str;
    int sum=0;
    int num=0;
    int result[100];
    int i=0;
    while(str[i]){
        num++;
        i++;
    }
    int N[num];
    for(int i=0;i<num;i++){
        N[i]=str[i]-'0';
        sum+=N[i];
//        printf("%d",N[i]);
    }
//    printf("%d",sum);
    if(sum==0){
        printf("zero");
    }
    i=0;
    while(sum){
        result[i]=sum%10;
        sum=sum/10;
        i++;
    }
//    for(int j=0;j<i;j++){
//        printf("%d",result[j]);
//    }
    for(int j=i-1;j>=0;j--){
        switch(result[j]){
            case 0 :printf("zero");break;
            case 1 :printf("one");break;
            case 2 :printf("two");break;
            case 3 :printf("three");break;
            case 4 :printf("four");break;
            case 5 :printf("five");break;
            case 6 :printf("six");break;
            case 7 :printf("seven");break;
            case 8 :printf("eight");break;
            case 9 :printf("nine");break;
        }
        if(j!=0){
            printf(" ");
        }
    }
    return 0;
}
