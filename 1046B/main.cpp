#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	scanf("%d",&n);
	int a,at,b,bt;
	int jia=0,yi=0;
	for(int i=0;i<n;i++){
		scanf("%d%d%d%d",&a,&at,&b,&bt);
		if((at==(a+b))&&(bt!=(a+b))){
			yi++;//ÒÒ·£¾Æ 
		}else if((at!=(a+b))&&(bt==(a+b))){
			jia++;
		} 
	}
	printf("%d %d",jia,yi);
	return 0;
}
