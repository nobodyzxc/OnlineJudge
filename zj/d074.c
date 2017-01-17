#include<stdio.h>
int main(void){
	int a , max = 0;
	while(~scanf("%d" , &a)){
		if(a > max) max = a;
	}
	printf("%d\n" , max);
	return 0;
}

