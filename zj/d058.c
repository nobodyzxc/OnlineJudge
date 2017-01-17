#include<stdio.h>
int main(void){
	int i;
	scanf("%d" , &i);
	printf("%d\n" , (i > 0) - (i < 0) );
	return 0;
}
