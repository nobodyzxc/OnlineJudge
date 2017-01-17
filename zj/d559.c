#include<stdio.h>
int main(void){
	int n;
	while(~scanf("%d" , &n)){
		printf("'C' can use printf(\"%%d\",n); to show integer like %d\n" , n);
	}
	return 0;
}

