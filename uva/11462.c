#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
int age[103];
int main(void){
	int n , i , a , j;
	while(~scanf("%d" , &n)){
		if(n == 0) break;
		memset(age , 0 , sizeof(age));
		for(i = 0 ; i < n ; i++){
			scanf("%d" , &a);
			age[a]++;
		}
		a = 1;
		for(i = 0 ; i < 103 ; i++){
			if(age[i]){
				for(j = 0 ; j < age[i] ; j++){
					if(a) printf("%d" , i) , a = 0;
					else printf(" %d" , i);
					n--;
				}
			}
			if(n == 0) break;
		}
		puts("");
	}
	return 0;
}
