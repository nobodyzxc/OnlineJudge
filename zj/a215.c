#include<stdio.h>

int main(void){
	int a,b;
	int num;
	int i=1;
	while(scanf("%d %d",&a,&b)!=EOF){
		num=a;
		while(1){
			if(num>b){
				printf("%d\n",i);
				i=1;
				break;
			}
			i++;
			num+=(a+i-1);
		}
	}
	return 0;
}
