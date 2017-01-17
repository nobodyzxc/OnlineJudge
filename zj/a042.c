#include<stdio.h>
int cir(int b);
int main(void){
	int a;
	while(scanf("%d",&a)!=EOF){
		printf("%d\n", a*a - a + 2 );
	}
	return 0;
}
