#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	int i;
	while(1){
		scanf("%d" , &i);
		if(i < 0){
			printf("-1\n");
			break;
		}
		printf("%o\n" , i);
	}
	return 0;
}

