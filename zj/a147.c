#include<stdio.h>
#include<stdlib.h>
int main(void){
	int a,i;
	while(scanf("%d",&a)!=EOF){
		if(a==0){
			exit(0);
		}
		for(i=1;i<a;i++){
			if(i%7!=0){
				if(i!=1){
					printf(" ");
				}
				printf("%d",i);
			}
		}
		puts("");
	}
	return 0;
}
