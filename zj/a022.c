#include<stdio.h>
#include<string.h>
int main(void){
	char input[1000];
	int wrong;
	int n;
	int i;
	while(gets(input)!=NULL){
		wrong=0;
		n=strlen(input);
		for(i=0;i<n/2;i++){
			if(input[i]!=input[n-i-1]){
				printf("no\n");
				wrong=1;
				break;
			}
		}
		if(wrong==1){
			continue;
		}
		printf("yes\n");
	}
return 0;
}
