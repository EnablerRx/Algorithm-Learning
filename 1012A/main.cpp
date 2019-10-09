#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;
struct person{
    int id;
    int c;
    int c_rank;
    int m;
    int m_rank;
    int e;
    int e_rank;
    int a;
    int a_rank;
    int top_rank;
};
int cmpc(person a,person b){
    return a.c>b.c;
}
int cmpm(person a,person b){
    return a.m>b.m;
}
int cmpe(person a,person b){
    return a.e>b.e;
}
int cmpa(person a,person b){
    return a.a>b.a;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    struct person student[n];
    int rankptr;
    for(int i=0;i<n;i++){
        scanf("%d %d %d %d",&student[i].id,&student[i].c,&student[i].m,&student[i].e);
        student[i].a=(student[i].c+student[i].m+student[i].e)/3;
    }
    sort(student,student+n,cmpc);
    rankptr=1;
    student[0].c_rank=1;
    for(int i=1;i<n;i++){
        if(student[i].c==student[i-1].c){
            student[i].c_rank=student[i-1].c_rank;
            rankptr++;
        }else{
            rankptr++;
            student[i].c_rank=rankptr;
        }
    }
    sort(student,student+n,cmpm);
    rankptr=1;
    student[0].m_rank=1;
    for(int i=1;i<n;i++){
        if(student[i].m==student[i-1].m){
            student[i].m_rank=student[i-1].m_rank;
            rankptr++;
        }else{
            rankptr++;
            student[i].m_rank=rankptr;
        }
    }
    sort(student,student+n,cmpe);
    rankptr=1;
    student[0].e_rank=1;
    for(int i=1;i<n;i++){
        if(student[i].e==student[i-1].e){
            student[i].e_rank=student[i-1].e_rank;
            rankptr++;
        }else{
            rankptr++;
            student[i].e_rank=rankptr;
        }
    }
    sort(student,student+n,cmpa);
    rankptr=1;
    student[0].a_rank=1;
    for(int i=1;i<n;i++){
        if(student[i].a==student[i-1].a){
            student[i].a_rank=student[i-1].a_rank;
            rankptr++;
        }else{
            rankptr++;
            student[i].a_rank=rankptr;
        }
    }
    /*²éÕÒ×î¸ßrank*/
    int hrank_temp;
    for(int i=0;i<n;i++){
        hrank_temp=n;
        if(student[i].c_rank<hrank_temp){
            hrank_temp=student[i].c_rank;
        }
        if(student[i].m_rank<hrank_temp){
            hrank_temp=student[i].m_rank;
        }
        if(student[i].e_rank<hrank_temp){
            hrank_temp=student[i].e_rank;
        }
        if(student[i].a_rank<hrank_temp){
            hrank_temp=student[i].a_rank;
        }
        student[i].top_rank=hrank_temp;
    }
    int ms;
    int flag=0;
    for(int i=0;i<m;i++){
        flag=0;
        scanf("%d",&ms);
        for(int j=0;j<n;j++){
            if(student[j].id==ms){
                flag=1;
                printf("%d ",student[j].top_rank);
                if(student[j].a_rank==student[j].top_rank){
                    printf("A");
                }else if(student[j].c_rank==student[j].top_rank){
                    printf("C");
                }else if(student[j].m_rank==student[j].top_rank){
                    printf("M");
                }else{
                    printf("E");
                }
            }
        }
//        printf("flag=%d\n",flag);
        if(flag==0){
            printf("N/A");
        }
        if(i!=m-1){
            printf("\n");
        }
    }
    return 0;
}
