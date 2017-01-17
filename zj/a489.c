#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ll long long
int main(void){
	ll a , b, c ,d;
	scanf("%lld %lld %lld" , &a , &b , &c);
	d = (a + b+ c)/2;
	printf("%lld\n" ,(d * (d - a) *(d - b) * (d - c)));
	return 0;
}

