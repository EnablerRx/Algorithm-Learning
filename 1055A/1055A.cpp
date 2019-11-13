#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

struct person{
    string name;
    int age;
    int networth;
};
int cmp(person a,person b){
    if(a.networth!=b.networth){
        return a.networth>b.networth;
    }else if(a.age!=b.age){
        return a.age>b.age;
    }else{
        return strcmp(a.name,b.name)=0;
    }
}

int main()
{
    int n,k;
    int num,min_,max_;
    int index;
    scanf("%d %d",&n,&k);
    person rich[n];
    for(int i=0;i<n;i++){
        cin>>rich[i].name;
        scanf("%d %d",&rich[i].age,&rich[i].networth);
    }
    sort(rich,rich+n,cmp);
    for(int i=0;i<k;i++){
        scanf("%d %d %d",&num,&min_,&max_);
        printf("Case #%d:",i+1);
        index=0;
        for(int j=0;j<n;j++){
            if((rich[j].age>=min_)&&(rich[j].age<=max_)){
                cout<<rich[j].name<<" "<<rich[j].age<<" "<<rich[j].networth<<"\n";
                index++;
            }
            if(index==num){
                break;
            }
        }
    }
    return 0;
}


