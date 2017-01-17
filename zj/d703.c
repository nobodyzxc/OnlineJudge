#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char ans[25];
int cur = 0;
void pm(int s , int l){
	if(s == 0 && l == 0){
		ans[cur] = '\0';
		puts(ans);
		return;
	}
	if(s){
		ans[cur++] = 'S';
		pm(s - 1 , l);
		cur--;
	}
	if(l){
		ans[cur++] = 'L';
		pm(s , l - 1);
		cur--;
	}
	return;
}

int main(void){
	int s , l , fir = 1;
	while(~scanf("%d %d" , &s , &l)){
		if(fir) fir = 0;
		else puts("");
		pm(s , l);
		
	}
	return 0;
}

