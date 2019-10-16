#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	scanf("%d",&n);
	int a[n];
	int result[5]={0,0,0,0,0};
	float A4=0;
	int flag=0,num=0;
	int flag1=0,flag2=0,flag3=0,flag4=0,flag5=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		//A1的结果 
		if((a[i]%5==0)&&(a[i]%2==0)){
			result[0]+=a[i];
			flag1=1;
		}
		//A2的结果
		if((a[i]%5==1)){
			if(flag%2==0){
				result[1]+=a[i];
				flag++;
			}else{
				result[1]-=a[i];
				flag++;
			}
			flag2=1;
		} 
		//A3的结果
		if(a[i]%5==2){
			result[2]++;
			flag3=1;
		} 
		//A4的结果
		if(a[i]%5==3){
			A4+=a[i];
			num++;
			flag4=1;
		} 
		//A5的结果
		if((a[i]%5==4)&&(a[i]>result[4])){
			result[4]=a[i];
			flag5=1;
		} 	
	}
	A4/=num;
	if(flag1==1){
		printf("%d ",result[0]);
	}else{
		printf("N ");
	}
	if(flag2==1){
		printf("%d ",result[1]);
	}else{
		printf("N ");
	}
	if(flag3==1){
		printf("%d ",result[2]);
	}else{
		printf("N ");
	}
	if(flag4==1){
		printf("%.1f ",A4);
	}else{
		printf("N ");
	}
	if(flag5==1){
		printf("%d",result[4]);
	}else{
		printf("N");
	}
	//printf("%d %d %d %.1f %d",result[0],result[1],result[2],A4,result[4]);
	return 0;
}
