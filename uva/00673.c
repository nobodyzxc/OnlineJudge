#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char xs[222];
char invrs(char in){
	if(in == ')')
		return '(';
	else if(in == ']')
		return '[';
	return 'N';
}
void ans(void){
	char stk[200];
	int ptr = 0;
	int i;
	for(i = 0 ; i < strlen(xs)  ; i++){
		if(xs[i] == '(' || xs[i] == '['){
			stk[ptr++] = xs[i];
		}
		else if(xs[i] == ')' || xs[i] == ']'){
			if(stk[ptr - 1] == invrs(xs[i])){
				ptr--;
			}
			else{
				puts("No");
				return;
			}
		}
		else{
			puts("No");
			return;
		}
	}
	if(ptr != 0){
		puts("No");
	}
	else{
		puts("Yes");
	}
	return;
}

int main(void){

	int nm , i;
	scanf("%d\n" , &nm);
	for(i = 0 ; i < nm ; i++){
		gets(xs);
		if(xs[0] == '\0'){
			puts("Yes");
			continue;
		}
		ans();
	}
	return 0;
}

