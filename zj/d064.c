#include<stdio.h>
int main(void){
	int i;
	scanf("%d" , &i);
	printf("%s\n" , i%2 ? "Odd" : "Even");
	return 0;
}

