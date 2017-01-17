#include<stdio.h>
#include<string.h>
int sum[26];
void add(char tra){
	if(tra <= 122 && tra >= 97){
		sum[tra - 97]++;
	}
	else if(tra <= 90 && tra >= 65){
		sum[tra - 65]++;
	}
	return;
}
int main(void){
	char ss[1111111];
	int i , fail = 0 ;
	while(gets(ss)){
		memset(sum , 0 , sizeof(sum));
		int len = strlen(ss);
		fail = 0;
		for(i = 0 ; i < len ; i++){
			add(ss[i]);
		}
		for(i = 0 ; i < 26 ; i++){
			if(sum[i] % 2){
				if(fail == 0){
					fail = 2;
					continue;
				}
				else if(fail == 2){
					fail = 1;
					puts("no...");
					break;
				}
			}
		}
		if(fail != 1){
			puts("yes !");
		}
	}
	return 0;
}
