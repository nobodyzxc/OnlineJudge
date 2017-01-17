#include<stdio.h>
int main(void){
	int i , n , m , acc;
	scanf("%d\n" , &n);
	for(i = 0 ; i < n ; i++){
		acc = 1;
		scanf("%d" , &m);
		if(m == 0){
			puts("0");
			continue;
		}
		while(m != 0){
			acc *= m % 10;
			m /= 10;
		}
		printf("%d\n" , acc);
	}
	return 0;
}

