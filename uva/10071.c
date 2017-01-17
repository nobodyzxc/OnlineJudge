#include<stdio.h>
int main(void){
	int v , t;
	while(~scanf("%d %d" , &v , &t)){
		printf("%d\n" , (4*v*t) / 2);
	}
	return 0;
}

