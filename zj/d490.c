#include<stdio.h>
#define ll long long
int main(void){
	ll i, acc , a , b;
	scanf("%lld %lld" , &a , &b);
	if(a % 2) i = a + 1;
	else i = a;
	for( ; i <= b ; i+=2){
		acc += i;
	}
	printf("%lld\n" , acc);
	return 0;
}

