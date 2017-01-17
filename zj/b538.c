#include<stdio.h>
#include<stdlib.h>
struct div{
	int m , s;
};
int gcd(int x , int y){
	if(y == 0){
		return x;
	}
	else{
		return gcd(y , x % y);
	}
}
int main(void){
	struct div a , b;
	char op;
	int d;
	while(~scanf("%d %d %d %d %c" , &a.s , &a.m , &b.s , &b.m , &op)){
		switch(op){
			case '+':
				a.s *= b.m;
				b.s *= a.m;
				a.s += b.s;
				a.m *= b.m;
				break;
			case '-':
				a.s *= b.m;
				b.s *= a.m;
				a.s -= b.s;
				a.m *= b.m;
				break;
			case '*':
				a.s *= b.s;
				a.m *= b.m;
				break;
			case '/':
				a.s *= b.m;
				a.m *= b.s;
				break;
		}
		d = gcd(a.s , a.m);
		a.s /= d;
		a.m /= d;
		if(a.s == 0){
			puts("0");
		}
		else if(a.m * a.s > 0){
			if(abs(a.m) == 1){
				printf("%d\n" , abs(a.s));
			}
			else{
				printf("%d/%d\n" , abs(a.s) , abs(a.m));
			}
		}
		else{
			if(abs(a.m) == 1){
				printf("-%d\n" , abs(a.s));
			}
			else{
				printf("-%d/%d\n" , abs(a.s) , abs(a.m));
			}
		}	
	}
	return 0;
}
