#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
ll Abs(ll a){
	return (~((a > 0) * -2)) * a;
}
int main(void){
	ll a , b;
	while(~scanf("%lld %lld" , &a , &b)){
		printf("%lld\n" , Abs(a - b));
	}
	return 0;
}

