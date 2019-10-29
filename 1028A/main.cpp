#include <iostream>
#include <algorithm>

using namespace std;

struct student{
    int id;
    string name;
    int score;
};

int cmp(student a,student b){
    if(a.id!=b.id)
        return a.id<b.id;
}
int cmp2(student a,student b){
    if(a.name!=b.name){
        return a.name<b.name;
    }else if(a.id!=b.id){
        return a.id<b.id;
    }

}
int cmp3(student a,student b){
    if(a.score!=b.score){
        return a.score<b.score;
    }else if(a.id!=b.id){
        return a.id<b.id;
    }
}

int main()
{
    int n=0,c=0;
    scanf("%d %d",&n,&c);
    student stu[n];

    for(int i=0;i<n;i++){
        cin>>stu[i].id>>stu[i].name>>stu[i].score;
    }
    if(c==1){
        sort(stu,stu+n,cmp);
    }else if(c==2){
        sort(stu,stu+n,cmp2);
    }else{
        sort(stu,stu+n,cmp3);
    }


    for(int i=0;i<n;i++){
        printf("%06d",stu[i].id);//注意输出补0的格式
        cout<<" "<<stu[i].name<<" "<<stu[i].score;
        if(i!=n-1){
            printf("\n");
        }
    }
    return 0;
}
