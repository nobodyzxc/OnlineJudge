#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	int acc = 0;
	char ch;
	while(~(ch = getchar())){
		if(ch >='0' && ch <= '9'){
			acc += ch - '0';
			acc %= 3;
		}
		if(ch == '\n'){
			if(acc) puts("no");
			else puts("yes");
			acc = 0;
		}
	}
	return 0;
}

