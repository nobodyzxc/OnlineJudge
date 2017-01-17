#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void ans(char gg[]){
	char a;
	int i , s = 0;
	for(i = 0 ; i < strlen(gg) ; i++){
		a = gg[i];
		if(a == '0'){
			if(gg[1] != '\0'){
				puts("Fail");
				return;
			}
		   	else{
				exit(0);
			}
		}
		if(a == ' ' || a == '\0') continue;
		if(a>='a' && a<='z'){
			s += a - 'a' + 1;
		}
		else if(a>='A' && a<='Z'){
			s += a - 'A' + 1;
		}
		else{
			puts("Fail");
			return;
		}
	}
	printf("%d\n" , s);
	return;
}
int main(void){
	char gg[1000];
	while(gets(gg)){
		ans(gg);
	}
	return 0;
}

