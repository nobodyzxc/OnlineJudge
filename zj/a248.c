#include<stdio.h>
#include<stdlib.h>
#define ll long long
int main(void){
	ll a , b , n , i;
	while(~scanf("%lld %lld %lld" , &a , &b , &n)){
		printf("%lld." , a / b);
		for(i = 0 ; i < n ; i++){
			a = (a % b) * 10;
			printf("%lld" , a / b);
		}
		puts("");
	}
	return 0;
}

