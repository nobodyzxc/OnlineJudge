#include<stdio.h>

int main(void){
int num,i;
int array[100]={0};
int arraynum=0;
	while(scanf("%d",&num)!=EOF){
		arraynum=0;
		do{
			array[arraynum++]=num%2;
			num/=2;
		}while(num>=1);
		for(i=arraynum-1;i>=0;i--){
			printf("%d",array[i]);
		}	
		printf("\n");
	}
	return 0;
}
