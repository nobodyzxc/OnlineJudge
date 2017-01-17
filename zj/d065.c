#include<stdio.h>
int main(void){
	int a , b;
	scanf("%d" , &a);
	scanf("%d" , &b);
	b > a ? (b = b) : (b = a);
	scanf("%d" , &a);
	b > a ? (b = b) : (b = a);
	printf("%d\n" , b);
	return 0;
}

