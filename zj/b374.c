#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	int i , n[30001] , d , b , max;
	while(~scanf("%d" , &d)){
		max = 0;
		memset(n , 0 , sizeof(n));
		for(i = 0 ; i < d ; i++){
			scanf("%d" , &b);
			n[b]++;
			if(n[b] > max){
				max = n[b];
			}
		}
		for(i = 1 ; i < 30001 ; i++){
			if(n[i] == max){
				printf("%d %d\n" , i , max);
			}
		}
	}
	return 0;
}

