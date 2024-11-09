//202410111303
//3331592296@ qq.com
//余洋
#include<stdio.h>

int main(){
	int n;
	int i;
	double sum=1;
	
	printf("");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum*=i;
	}
	
	printf("%f\n",sum);
	
	return 0;
}
