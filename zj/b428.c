#include<stdio.h>
#include<stdlib.h>
int main(void){
	char str0[1111] , str1[1111];
	int ans;
	while(fgets(str0 , sizeof(str0) , stdin)){
		fgets(str1 , sizeof(str1) , stdin);
		if(str1[0] < str0[0]) ans = str1[0] - str0[0] + 26;
		else ans = str1[0] - str0[0];
		printf("%d\n" , ans);
	}
	return 0;
}

