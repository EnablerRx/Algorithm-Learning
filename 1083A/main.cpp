#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

struct person{
    string name;
    string ID;
    int grade;
};

int cmp(person a,person b){
    return a.grade>b.grade;//从大到小排列

}

int main()
{
    int n;
    scanf("%d",&n);
    person stu[n];
    int flag=0;
    int a=0,b=0;
    for(int i=0;i<n;i++){
        cin>>stu[i].name;
        cin>>stu[i].ID;
        scanf("%d",&stu[i].grade);
    }
    scanf("%d%d",&a,&b);
    sort(stu,stu+n,cmp);
    for(int i=0;i<n;i++){
        if((stu[i].grade>=a)&&(stu[i].grade<=b)){
            flag=1;
            cout<<stu[i].name;
            printf(" ");
            cout<<stu[i].ID;
            printf("\n");
        }
    }
    if(flag==0){
        printf("NONE");
    }
    //cout << "Hello world!" << endl;
    return 0;
}
