#include<stdio.h>
#include<string.h>
int ans[10];
void putans(int i){
	int j;
	for(j = 0 ; j < i ; j++){
		printf("%d" , ans[j]);
	}
	puts("");
	return;
}

void f(int i , int use[] , int cur){
	int j;
	for(j = i - 1 ; j >= 0 ; j--){
		if(use[j] == 0){
			ans[cur] = j + 1;	
			use[j] = 1;
			if(cur != i - 1) f(i , use , cur + 1);
			else putans(i);
			use[j] = 0;
		}
	}
	return;
}

int main(void){
	int i;
	while(~scanf("%d" , &i)){
		int use[i] , cur = 0;
		memset(use , 0 , sizeof(use));
		f(i , use , cur);
	}
	return 0;
}

