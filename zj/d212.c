#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
ll h[100];
ll dp(ll ans){
	if(ans == 1) return 1;
	else if(ans == 2) return 2;
	if(h[ans] != -1)
		return h[ans];
	else{
		h[ans] = dp(ans - 1) + dp(ans - 2);
		return h[ans];
	}
	return -1;
}
int main(void){
	memset(h , -1 , sizeof(h));
	ll ans;
	while(~scanf("%lld" , &ans)){
		printf("%lld\n" , dp(ans));
	}
	return 0;
}

