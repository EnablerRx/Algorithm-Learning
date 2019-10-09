#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    string test,Eva;
    cin>>test;
    cin>>Eva;
    int test_num=0;
    int Eva_num=0;
    while(test[test_num]){
        //printf("%c",str1[test_num]);
        test_num++;
    }
    while(Eva[Eva_num]){
        Eva_num++;
    }
    int Eva_bool[Eva_num];
    int test_bool[test_num];
    int zero_num=0;
    memset(test_bool,0,sizeof(test_bool));
    memset(Eva_bool,0,sizeof(Eva_bool));
    for(int i=0;i<Eva_num;i++){
        for(int j=0;j<test_num;j++){
            if((Eva[i]==test[j])&&(test_bool[j]==0)){
                Eva_bool[i]=1;
                test_bool[j]=1;
                break;
            }
        }
    }
    for(int i=0;i<Eva_num;i++){
        if(Eva_bool[i]==0){
            zero_num++;
        }
    }
    if(zero_num==0){
        printf("Yes %d",test_num-Eva_num);
    }else{
        printf("No %d",zero_num);
    }
    return 0;
}
