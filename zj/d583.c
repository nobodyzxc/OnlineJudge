#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a , const void *b){
	return ( *(int *)a - *(int *)b);
}

int main(void){
	int i , s;
	while(~scanf("%d" , &s)){
		int n[s];
		for(i = 0 ; i < s ; i++)
			scanf("%d" , &n[i]);
		qsort(n , s , sizeof(int) , cmp);
		for(i = 0 ; i < s ; i++){
			if(i == 0) printf("%d" , n[i]);
			else printf(" %d" , n[i]);
		}
		puts("");
	}
	return 0;
}

