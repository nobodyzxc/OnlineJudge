#include<stdio.h>
#include<stdlib.h>
int main(void){
	int c , i , acc = 0 , cnt = 0;
	char ch;
	scanf("%d\n" , &c);
	for(i = 0 ; i < c ; i++){
		acc = 0 , cnt = 0;
		while((ch = getchar()) != '\n'){
			if(ch == '(')
				acc++ , cnt++;
			else if(ch == ')'){
				if(acc == 0){
					acc = -19;
					break;
				}
				acc--;
			}
		}
		if(acc == 0){
			printf("%d\n" , cnt);
		}
		else{
			puts("0");
		}
	}
	return 0;
}

