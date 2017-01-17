#include<stdio.h>

int main(void){
	int a , b , tem;
	int ans;
	while(scanf("%d%d",&a,&b) != EOF){
		while(1){
			if(b == 0){
				ans = a;
				break;
			}
			else{	
				tem = a % b;
				a = b;
				b = tem;
			}
		}
		printf("%d\n",ans);
	}	
	return 0;
}
