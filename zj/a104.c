#include<stdio.h>

int main(void){
	int num;
	int i,j,ch;
	int all[1000];
	while(scanf("%d",&num)!=EOF){
		for(i=0;i<num;i++){
			scanf("%d",&all[i]);
		}
		for(i=0;i<num;i++){
			for(j=0;j<num-1;j++){
				if(all[j]>all[j+1]){
					ch=all[j];
					all[j]=all[j+1];
					all[j+1]=ch;
				}
			}
		}
		for(i=0;i<num;i++){
			if(i!=0){
				printf(" %d",all[i]);
			}
			else{
				printf("%d",all[i]);
			}
		}
		puts("");
	}
	return 0;
}
