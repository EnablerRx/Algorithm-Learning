#include <iostream>

using namespace std;

int reverseNum(long long int Z,int pz){
    int result[11];
    int num=0;
    int index = 0;
    while(Z){
        result[index]=Z%10;
        Z/=10;
        index++;
    }
    for(int i=0;i<index;i++){
        if(result[i]==pz){
           num=num*10+result[i];
        }
    }
    return num;
}

int main()
{
    long long int A=0,B=0;
    int pa=0,pb=0;
    int pc=0;
    scanf("%lld%d%lld%d",&A,&pa,&B,&pb);
    pc=reverseNum(A,pa)+reverseNum(B,pb);
    printf("%d",pc);
    return 0;
}
