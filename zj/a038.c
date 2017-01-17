#include<stdio.h>
#include<string.h>
int main(void){
	int i,len,re;
	char num[14]={'\0'};
	while(scanf("%s",num)!=EOF){
		for(i=13;i>=1;i--){
			if(num[i]=='0'){
				num[i]='\0';
			}
			else if(num[i]==NULL||num[i]=='\0'){
				continue;
			}
			else{
				break;
			}
		}
		len=strlen(num);
		for(i=1;i<=len/2;i++){
			re=num[i-1];
			num[i-1]=num[len-i];
			num[len-i]=re;
		}
		printf("%s\n",num);
	}
	return 0;
}
