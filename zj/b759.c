#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	char str[1111];
	scanf("%s" , str);
	int i , j , cnt , len = strlen(str);
	for(i = 0 ; i < strlen(str) ; i++){
		cnt = 0 , j = i;
		while(cnt != len){
		   printf("%c" , str[j++]);	
		   if(j == len) j = 0;
		   cnt++;
		}
		puts("");
	}
	return 0;
}

