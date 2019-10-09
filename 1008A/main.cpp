#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int num;
    scanf("%d",&num);
    int request[num+1];
    request[0]=0;
    int time=0;
    for(int i=1;i<num+1;i++){
        scanf("%d",&request[i]);
    }
    for(int i=1;i<num+1;i++){
        if((request[i]-request[i-1])>0){
            time+=6*(request[i]-request[i-1]);
        }else if((request[i]-request[i-1])<0){
            time+=4*(request[i-1]-request[i]);
        }
        time+=5;
//        printf("%d\n",time);
    }
    printf("%d",time);
    return 0;
}
