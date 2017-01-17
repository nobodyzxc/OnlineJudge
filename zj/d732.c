#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#define ll long long
int *num , n , k;
void locate(int q){
	int left = 0 , right = n - 1;
	if(q < num[left] || q > num[right]){
		puts("0");
		return;
	}
	while(num[(left + right) / 2] != q){
		if(num[left] == q){
			printf("%d\n" , left + 1);
			return;
		}
		else if(num[right] == q){
			printf("%d\n" , right + 1);
			return;
		}
//		printf("l = %d , r = %d\n" , left , right);
//		printf("q = %d , num[%d] = %d\n" ,q ,  (left + right) / 2 , num[(left + right) / 2]);
//		sleep(1);
		if(left - right == -1){
			puts("0");
			return;
		}

		if(num[(left + right) / 2] > q) right = (left + right) / 2;
		else left = (left + right) / 2;
	}
	printf("%d\n" , (left + right) / 2 + 1);
	return;
}
int main(void){
	int i , q;
	while(~scanf("%d %d" , &n , &k)){
		num = (int *)malloc(n * sizeof(int));
		for(i = 0 ; i < n ; i++)
			scanf("%d" , &num[i]);
		for(i = 0 ; i < k ; i++)
			scanf("%d" , &q) , locate(q);
		free(num);
	}
	return 0;
}
