#include<stdio.h>

int main(void){
	float num;
	float to=0;
	float in=0;
	int i;
	while(scanf("%f",&num)!=EOF){
		for(i=0;i<num;i++){
			scanf("%f",&in);
			to+=in;
		}
		if(to/num>59){
			puts("no");
		}
		else{
			puts("yes");

		}
		to=0;
		in=0;
	}
	return 0;
}
