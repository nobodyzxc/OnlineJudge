#include<stdio.h>
#define ll long long
int main(void){
	ll l , s;
	while(~scanf("%lld" , &l)){
		l /= 2;
		s = l / 2;
		l -= s;
		printf("%lld\n" , s * l);
	}
	return 0;
}

