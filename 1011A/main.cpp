#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double t1[3],t2[3],t3[3];
    double result=1.0;
    scanf("%lf%lf%lf",&t1[0],&t1[1],&t1[2]);
    scanf("%lf%lf%lf",&t2[0],&t2[1],&t2[2]);
    scanf("%lf%lf%lf",&t3[0],&t3[1],&t3[2]);
//    printf("%f %f %f",t1[0],t1[1],t1[2]);
//    printf("%f %f %f",t2[0],t2[1],t2[2]);
//    printf("%f %f %f",t3[0],t3[1],t3[2]);
    if((t1[0]>t1[1])&&(t1[0]>t1[2])){
        printf("W ");
        result*=t1[0];
//        printf("3333");
    }else if((t1[1]>t1[0])&&(t1[1]>t1[2])){
        printf("T ");
        result*=t1[1];
//        printf("3333");
    }else{
        printf("L ");
        result*=t1[2];
//        printf("3333");
    }
//    printf("%.2f\n",result);
    if((t2[0]>t2[1])&&(t2[0]>t2[2])){
        printf("W ");
        result*=t2[0];
    }else if((t2[1]>t2[0])&&(t2[1]>t2[2])){
        printf("T ");
        result*=t2[1];
    }else{
        printf("L ");
        result*=t2[2];
    }
//    printf("%.2f\n",result);
    if((t3[0]>t3[1])&&(t3[0]>t3[2])){
        printf("W ");
        result*=t3[0];
    }else if((t3[1]>t3[0])&&(t3[1]>t3[2])){
        printf("T ");
        result*=t3[1];
    }else{
        printf("L ");
        result*=t3[2];
    }
//    printf("%.2f\n",result);
    printf("%.2f",((result*0.65-1)*2));
    return 0;
}
