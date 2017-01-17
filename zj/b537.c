/**********************************
 *  ZeroJudge b537 AC (0ms, 104KB)*
 *********************************/
#include<stdio.h>
#define ll long long
ll gcd(ll a , ll b){
	if(b == 0)
		return a;
	else
		return gcd(b , a % b);
}


ll myexp(ll a , ll b){
	if(b == 0) return 1;
	ll i , acc = 1;
	for(i = 0 ; i < b ; i++){
		acc *= a;
	}
	return acc;
}		
ll f(ll s , ll m){
	if((m == 1) && (!(s & (s - 1)))){
		return myexp(2 , s - 1);
	}
	else if(s > m){
		return 2 * f(s - m , m);
	}
	else if(s < m){
		return 1 + f(m , s);
	}
	return -1;
}
int main(void){
	ll a , b;
	while(~scanf("%lld %lld" , &a , &b)){
		ll d = gcd(a , b);
		if(d != 1){
			a /= d , b /= d;
		}
		printf("%lld\n" , f(a , b));
	}
	return 0;
}
