/*
    ʹ��ð������ʱ
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int N;                              // ��������
    int K;                              // ������Ա��
    scanf("%d",&N);
    long long int ID[30010];            // ������
    int score[30010];                   // �������
    int group[30010];
    int rank_total[30010];
    int rank_group[30010];
    int index=0;                        // �����±�ָ��
    long long int temp_ID = 0;
    int temp_score=0,temp_group=0,temp_grank=0;
    /* ����ÿ���� */
    for(int i=0;i<N;i++){
        scanf("%d",&K);                 // ������Ա��
        /*����*/
        for(int j=0;j<K;j++){
            scanf("%lld%d",&ID[index],&score[index]);
            group[index]=i+1;
            index++;
        }
        for(int ii=index-K;ii<index;ii++){
            for(int jj=index-K+1;jj<index;jj++){
                if((score[jj]>score[jj-1])){
                    temp_score = score[jj];
                    score[jj]=score[jj-1];
                    score[jj-1]=temp_score;
                    temp_ID = ID[jj];
                    ID[jj]=ID[jj-1];
                    ID[jj-1]=temp_ID;
                    temp_group = group[jj];
                    group[jj]=group[jj-1];
                    group[jj-1]=temp_group;
                }
            }
        }
        /*����������������*/
        int rank_ptr=1;
        rank_group[index-K]=1;
        for(int k=1;k<K;k++){
            if(score[index-K+k]==score[index-K+k-1]){
                rank_group[index-K+k]=rank_group[index-K+k-1];
                rank_ptr++;
            }else{
                rank_ptr++;
                rank_group[index-K+k]=rank_ptr;
            }
        }
    }
    /*����ȫ������*/
    for(int i=0;i<index;i++){
        for(int j=1;j<index;j++){
            if((score[j]>score[j-1])){
                temp_grank=rank_group[j];
                rank_group[j]=rank_group[j-1];
                rank_group[j-1]=temp_grank;
                temp_score = score[j];
                score[j]=score[j-1];
                score[j-1]=temp_score;
                temp_ID = ID[j];
                ID[j]=ID[j-1];
                ID[j-1]=temp_ID;
                temp_group = group[j];
                group[j]=group[j-1];
                group[j-1]=temp_group;
            }
        }
    }

    int rank_ptr=1;
    rank_total[0]=1;
    for(int k=1;k<index;k++){
        if(score[k]==score[k-1]){
            rank_total[k]=rank_total[k-1];
            rank_ptr++;
        }else{
            rank_ptr++;
            rank_total[k]=rank_ptr;
        }
    }
    printf("%d\n",index);
    for(int i=0;i<index;i++){
        printf("%lld %d %d %d\n",ID[i],rank_total[i],group[i],rank_group[i]);
    }
    return 0;
}
