#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	char str[111];
	int cnt = 0;
	while(fgets(str , sizeof(str) , stdin)){
		int i , isword = 0;
		for(i = 0 ; i < strlen(str) ; i++){
			if((str[i] <= 'z' && str[i] >= 'a') ||
				(str[i] <= 'Z' && str[i] >= 'A')){
				isword = 1;
			}
			else{
				if(isword){
					cnt++;
					isword = 0;
				}
			}
		}
		printf("%d\n" , cnt);
		cnt = 0;
	}
	return 0;
}

