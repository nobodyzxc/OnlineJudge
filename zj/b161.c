#include<stdio.h>
#include<stdlib.h>
#define ll long long
ll Pow(ll e , ll x){
	ll acc = 1 , i;
	if(x == 0) return 1;
	for(i = 0 ; i < x ; i++){
		acc *= e;
	}
	return acc;
}

int main(void){
	int d;
	while(~scanf("%d" , &d)){
		printf("%lld\n" , (Pow(2 , d + 1) - 2));
	}
	return 0;
}

