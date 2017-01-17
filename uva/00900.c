#include<stdio.h>
#include<string.h>
#define ll long long
ll lln[51];
ll ans(ll l){
	if(lln[l] != -1){
		return lln[l];
	}
	else{
		lln[l] = ans(l - 1) + ans(l - 2);
		return lln[l];
	}
}

int main(void){
	ll L;
	memset(lln , -1 , sizeof(lln));
	lln[0] = 1 , lln[1] = 1;
	while(1){
		scanf("%lld" , &L);	
		if(L == 0)
			return 0;
		else
			printf("%lld\n" , ans(L));
	}
	return 0;
}

