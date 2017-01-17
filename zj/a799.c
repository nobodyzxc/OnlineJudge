#include<stdio.h>
int Abs(int n){
	return (~((n > 0) * -2)) * n;
}
int main(void){
	int n;
	while(~scanf("%d" , &n)){
		printf("%d\n" , Abs(n));
	}
	return 0;
}

