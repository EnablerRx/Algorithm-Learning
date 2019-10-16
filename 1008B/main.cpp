#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,m;
	scanf("%d%d",&n,&m);
	m=m%n;
	int a[n],temp=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(m>n/2){
		for(int i=0;i<n-m;i++){
			temp=a[0];
			for(int j=1;j<n;j++){
				a[j-1]=a[j];
			}
			a[n-1]=temp;
		}
	}else{
		for(int i=0;i<m;i++){
			temp=a[n-1];
			for(int j=n-1;j>=1;j--){
				a[j]=a[j-1];
			}
			a[0]=temp;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
		if(i!=n-1){
			printf(" ");
		}
	}
	return 0;
	
}
