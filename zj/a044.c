#include<stdio.h>
int calcu(int b);
int v(int);
int p(int);
int main(void){
	int a;
	while(scanf("%d",&a)!=EOF){
		printf("%d\n",v(a));
	}
	return 0;
//a*a - a + 2
}
int v(int b){
	if(b == 1) return 2;
	else return v(b - 1) +  p(b - 1);
}
int p(int b){
	if(b == 1) return 2;
	else return p(b - 1) + b;
}
