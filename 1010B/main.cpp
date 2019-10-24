#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,num=0;
	while(scanf("%d %d",&a,&b)!=EOF){
		if((a==0)||(b==0)){
			continue;
		}
			num++;
			if(num!=1){
				printf(" ");
			}
			printf("%d %d",a*b,b-1);
	
		}
	if(num==0){
		printf("0 0");
	}
	return 0;
}
