#include<stdio.h>
#include<stdlib.h>
int cmp(const void* a , const void *b){
	return ( *(int*)a - *(int*)b);
}
int main(void){
	int n;
	scanf("%d" , &n);
	int nn[n] , i;
	for(i = 0 ; i < n ; i++){
		scanf("%d" , &nn[i]);
	}
	qsort(nn , n , sizeof(int) , cmp);
	for(i = 0 ; i < n ; i++){
		printf("%d " , nn[i]);
	}
	puts("");
	return 0;
}

