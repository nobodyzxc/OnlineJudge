#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
int main(void){
	int n ;
	while(~scanf("%d" , &n)){
		switch(n % 5){
			case 0:
				puts("U");
				break;
			case 1:
				puts("G");
				break;
			case 2:
				puts("Y");
				break;
			case 3:
				puts("T");
				break;
			case 4:
				puts("I");
				break;
		}
	}
	return 0;
}
