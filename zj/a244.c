#include<stdio.h>
#include<stdlib.h>
#define ll long long
int main(void){
	ll n , i , a , b , c;
	scanf("%lld" , &n);
	for(i = 0 ; i < n ; i++){
		scanf("%lld %lld %lld" , &a , &b , &c);
		if(a == 1){
			printf("%lld\n" , b + c);
		}
		else if(a == 2){
			printf("%lld\n" , b - c);
		}
		else if(a == 3){
			printf("%lld\n" , b * c);
		}
		else if(a == 4){
			printf("%lld\n" , b / c);
		}
	}
	return 0;
}

