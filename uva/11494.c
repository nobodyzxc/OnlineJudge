#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int ABS(int a){
	return (~((a > 0) * -2)) * a;
}
int main(void){
	int x1 , y1 , x2 , y2;
	while(~scanf("%d %d %d %d" , &x1 , &y1 , &x2 , &y2)){
		if((!x1) && (!y1) && (!x2) && (!y2)){
			break;
		}
		if((x1 == x2) && (y1 == y2))
			puts("0");
		else if((x1 == x2) || (y1 == y2))
			puts("1");
		else{
			int m = ABS(x1 - x2) , n = ABS(y1 - y2);
			if( (m / n == 1) && (m % n == 0))
				puts("1");
			else
				puts("2");
		}
	}
	return 0;
}
