#include<stdio.h>
#define ll long long
int main(void){
	ll a , b;
	scanf("%lld %lld" , &a ,&b);
	printf("%lld\n" , ((b - b % 2) - (a + a % 2))/ 2 + 1);
	return 0;
}

