#include<stdio.h>
#define ll long long
ll gcd(ll x , ll y){
	if(y == 0)
		return x;
	else
		return gcd(y , x % y);
}

int main(void){
	ll c , i;
	while(~scanf("%lld" , &c)){
		if(c == 0) break;
		ll v[c] ,  kbn = 1;
		for(i = 0 ; i < c ; i++){
			scanf("%lld" , &v[i]);
		}
		kbn = v[0];
		for(i = 1 ; i < c ; i++){
			kbn = kbn * v[i] / gcd(kbn , v[i]);
		}
		printf("%lld\n" , kbn);
	}
	return 0;
}

