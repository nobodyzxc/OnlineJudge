#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
ll Pow(ll e , ll x){
	ll i , acc = 1;
	if(x == 0) return 1;
	for(i = 0 ; i < x ; i++){
		acc *= e;
	}
	return acc;
}
double aprx(double a , int p){
	ll tem = (ll)(a * Pow(10 , p+1));
	if(tem % 10 >= 5){
		return ((double)(tem / 10)) / (double)Pow(10 , p) + 1 / (double)Pow(10 , p);
	}
	else{
		return ((double)(tem / 10)) / (double)Pow(10 , p);
	}
}
int main(void){
	double f;
	scanf("%lf" , &f);
	printf("%.3lf\n" , aprx((f - 32) / 9 * 5 , 3));
	return 0;
}
