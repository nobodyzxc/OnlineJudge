#include<stdio.h>
#define ll long long
ll g(ll n);
ll f(ll n);
int main(void){
	ll n;
	while(scanf("%lld",&n)!=EOF){
		printf("%lld %lld\n",f(n),g(n));
	}
	return 0;
}
ll g(ll n){
	ll i , sum = 0;
	for(i = 1 ; i <= n ; i++){
		sum += i*(i + 1) / 2;
	}
	return sum;
}
ll f(ll n){
	return (n + 1)*n / 2;
}
