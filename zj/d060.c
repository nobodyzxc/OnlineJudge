#include<stdio.h>
#include<stdlib.h>
int main(void){
	int m;
	scanf("%d" , &m);
	printf("%d\n" , (60 + 25 - m) % 60);
	return 0;
}

