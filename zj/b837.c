#include<stdio.h>
#include<string.h>
int ans[32];
void swap(int *a , int *b){
	int tem = *a;
	*a = *b;
	*b = tem;
	return;
}
int feb(int x){
	if(ans[x] != -1)
		return ans[x];
	else{
		ans[x] =  feb(x - 1) + feb(x - 2);
		return ans[x];
	}
}
int main(void){
	int i , j , a , b , c , cnt;
	memset(ans , -1 , sizeof(ans));
	ans[0] = 0 , ans[1] = 1;
	for(i = 0 ; i < 32 ; i++){
		feb(i);
	}
	scanf("%d" , &c);
	for(i = 0 ; i < c ; i++){
		scanf("%d %d" , &a , &b);
		if(a > b)
			swap(&a , &b);
		cnt = 0;
		for(j = 0 ; j < 32 ; j++){
			if(ans[j] >= a && ans[j] <= b){
				printf("%d\n" , ans[j]);
				cnt++;
			}
			else if(ans[j] > b){
				break;
			}
		}
		printf("%d\n" , cnt);
		if(i != c - 1) puts("------");
	}
	return 0;
}

