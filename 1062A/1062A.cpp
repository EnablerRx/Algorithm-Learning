/*
**
**注意sort的排序方式可以写在一个cmp内，好好学习一下！！ 
**
*/
#include <iostream>
#include<algorithm>
#include<cstdio> 
#include<cstring>

using namespace std;
struct item{
    int id;
    int virtue;
    int talent;
    int people_type=0;//属于哪一种人:12345
    int total;
};
/*
** If there is a tie of the total grade, 
** they must be ranked with respect to their virtue grades
** in non-increasing order. If there is still a tie,
** then output in increasing order of their ID's. 
*/ 

int cmp(item a,item b){
    if(a.people_type!=b.people_type){
        return a.people_type<b.people_type;
    }else if(a.total!=b.total){
        return a.total>b.total;
    }else if(a.virtue!=b.virtue){
        return a.virtue>b.virtue;
    }else{
        return a.id<b.id;
    }
}

//int cmp1(item a,item b){//排名人物类型
//    return a.people_type<b.people_type;
//}
//int cmp2(item a,item b){
//    return a.total>b.total;
//}
//int cmp3(item a,item b){
//    return a.id<b.id;
//}
//int cmp4(item a,item b){
//    return a.virtue>b.virtue;
//}

int main()
{
    int n=0,L=0,H=0;
    scanf("%d %d %d",&n,&L,&H);
    item items[n];
    int num=0,type1=0,type2=0,type3=0,type4=0;//被排名人数
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&items[i].id,&items[i].virtue,&items[i].talent);
        items[i].total=items[i].talent+items[i].virtue;
        if((items[i].virtue>=H)&&(items[i].talent>=H)){
            items[i].people_type=1;
            num++;
            type1++;
        }else if((items[i].talent<H)&&(items[i].virtue>=H)&&(items[i].talent>=L)){
            items[i].people_type=2;
            num++;
            type2++;
        }else if((items[i].talent<H)&&(items[i].virtue<H)&&(items[i].talent>=L)&&(items[i].virtue>=L)&&(items[i].virtue>=items[i].talent)){
            items[i].people_type=3;
            num++;
            type3++;
        }else if((items[i].virtue<L)||(items[i].talent<L)){//注意这里是或
            items[i].people_type=5;
        }else{
            items[i].people_type=4;
            num++;
            type4++;
        }
    }
    sort(items,items+n,cmp);
//    sort(items,items+n,cmp3);//排id
//    sort(items,items+n,cmp1);//排等级
//    sort(items,items+type1,cmp4);//排virtue
//    sort(items+type1,items+type1+type2,cmp4);
//    sort(items+type1+type2,items+type1+type2+type3,cmp4);
//    sort(items+type1+type2+type3,items+type1+type2+type3+type4,cmp4);
//    sort(items,items+type1,cmp2);//排total
//    sort(items+type1,items+type1+type2,cmp2);
//    sort(items+type1+type2,items+type1+type2+type3,cmp2);
//    sort(items+type1+type2+type3,items+type1+type2+type3+type4,cmp2);
    printf("%d\n",num);
    for(int i=0;i<n;i++){
        if(items[i].people_type!=5){
            printf("%d %d %d",items[i].id,items[i].virtue,items[i].talent);
            if(i!=n-1){
                printf("\n");
            }
        }
    }
    return 0;
}

