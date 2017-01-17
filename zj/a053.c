#include<stdio.h>

int main(void){
	int a;
	while(~scanf("%d",&a)){
		if(a<=10){
			a*=6;
		}
		else if(a<=20){
			a=(a-10)*2+60;
		}
		else if(a<=40){
			a=(a-20)*1+80;
		}
		else{
			a=100;
		}
		printf("%d\n",a);
	}
	return 0;
}
