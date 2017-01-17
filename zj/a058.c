#include<stdio.h>

int main(void){
	int k=0;
	int	k1=0;
	int	k2=0;
	int a,b;
	scanf("%*d");
	while(scanf("%d",&a)!=EOF){
		b=a%3;
		if(b==0){
			k++;
		}
		else if(b==1){
			k1++;
		}
		else if(b==2){
			k2++;
		}
	}
	printf("%d %d %d\n",k,k1,k2);
	return 0;
}
