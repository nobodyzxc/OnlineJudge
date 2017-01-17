#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	int n;
	while(~scanf("%d" , &n)){
		int cnt = 1 , acc = 1;
		while(1){
			if(acc % n == 0){	
				printf("%d\n" , cnt);
				break;
			}
			acc = (acc % n) * 10 + 1;
			cnt += 1;
		}
	}
	return 0;
}

