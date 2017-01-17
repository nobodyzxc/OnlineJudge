#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	char str[1000];
	int i;
	while(fgets(str , sizeof(str) , stdin)){
		for(i = 0 ; i < strlen(str) ; i++){
			if(str[i] < 0) printf("%c" , str[i]);
		}
		puts("");
	}
	return 0;
}

