/*
**
** id最好用string，不然输出可能出现0003的情况
**
*/
#include <iostream>
#include <algorithm>

using namespace std;
struct student{
    long long id;
    int score;
    int group;
    int group_rank;
    int total_rank;
};

int cmp(student a,student b){
    if(a.score!=b.score){
        return a.score>b.score;
    }else if(a.id!=b.id){
        return a.id<b.id;
    }
}

int main()
{
    int n=0;//组数
    int k=0;
    int total=0;//总人数
    int index=0;//总人数的index
    int index_grank=0;//group rank的下标
    int index_trank=1;
    student stu[30010];
    scanf("%d",&n);
    for(int i=1;i<n+1;i++){
        scanf("%d",&k);
        for(int j=0;j<k;j++){
            scanf("%lld %d",&stu[index].id,&stu[index].score);
            stu[index].group=i;
            index++;
        }
        sort(stu+index-k,stu+index,cmp);
        index_grank=1;
        stu[index-k].group_rank=1;
        for(int j=index-k+1;j<index;j++){
            if(stu[j].score!=stu[j-1].score){
                index_grank++;
                stu[j].group_rank=index_grank;
            }else{
                stu[j].group_rank=stu[j-1].group_rank;
                index_grank++;
            }
        }
    }
    sort(stu,stu+index,cmp);
    stu[0].total_rank=1;
    for(int i=1;i<index;i++){
        if(stu[i].score!=stu[i-1].score){
            index_trank++;
            stu[i].total_rank=index_trank;
        }else{
            stu[i].total_rank=stu[i-1].total_rank;
            index_trank++;
        }
    }
    printf("%d\n",index);
    for(int i=0;i<index;i++){
        //这里有坑
        printf("%013lld %d %d %d",stu[i].id,stu[i].total_rank,stu[i].group,stu[i].group_rank);
        if(i!=index-1){
            printf("\n");
        }
    }
    return 0;
}
