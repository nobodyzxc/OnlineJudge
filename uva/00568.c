#include<stdio.h>
int f(int x){
	int i;
	int ans = 1;
	if(x == 0) return 1;
	for(i = 1 ; i <= x ; i++){
		ans *= i;
		while(ans % 10 == 0){
			ans /= 10;
		}
		ans %= 100000;
	}
	ans %= 10;
	return ans;
}

int main(void){
	int d;
	while(~scanf("%d" , &d)){
		printf("%5d -> %d\n" , d , f(d));
	}
	return 0;
}

