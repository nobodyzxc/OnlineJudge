#include<stdio.h>

int main(void){
	int c,a,b,i,j;
	int to=0;
	scanf("%d",&c);
	for(j=1;j<=c;j++){
		scanf("%d",&a);
		scanf("%d",&b);
		for(i=0;i<=33;i++){
			if((i*i>=a)&&(i*i<=b)){
				to=to+(i*i);
			}
		}
		printf("Case %d: %d\n",j,to);
		to=0;
	}
	return 0;
}
