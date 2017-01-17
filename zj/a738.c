#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long 
ll gcd(ll x , ll y){
	if(y == 0)
		return x;
	else
		return gcd(y , x % y);
}
int main(void){
	ll x , y;
	while(~scanf("%lld %lld" , &x , &y)){
		printf("%lld\n" , gcd(x , y));
	}
	return 0;
}

