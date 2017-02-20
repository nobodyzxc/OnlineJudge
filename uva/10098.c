#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int use[12] , len;
char s[12] , ans[12];
void sort(char des[]){
	int i , j;
	char tem;
	for(i = 0 ; i < strlen(des) - 1 ; i++){
		for(j = 0 ; j < strlen(des) - 1 - i ; j++){
			if(des[j + 1] < des[j]){
				tem = des[j + 1];
				des[j + 1] = des[j];
				des[j] = tem;
			}
		}
	}
	return;
}
void perm(int cur){
	int i;
	if(cur == len){
		ans[cur] = 0;
		puts(ans);
	}
	else{
		char last = 0;
		for(i = 0 ; i < len ; i++){
			if((!use[i]) && (last != s[i])){
				last = s[i];
				use[i] = 1;
				ans[cur] = s[i];
				perm(cur+1);
				use[i] = 0;
			}
		}
	}
	return;
}

int main(void){
	int n;
	scanf("%d\n" , &n);
	int i;
	for(i = 0 ; i < n ; i++){
		memset(use , 0 , sizeof(use));
		gets(s);
		len = strlen(s);
		sort(s);
		perm(0);
		puts("");
	}
	return 0;
}

