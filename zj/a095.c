#include<stdio.h>

int main(void){
	int a;
	int b;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(a == b)
			printf("%d\n" , a);
		else
			printf("%d\n",b+1);
	}
	return 0;
}
