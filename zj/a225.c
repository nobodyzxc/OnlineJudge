#include<stdio.h>
void swap(int *a , int *b){
	int tem = (*a);
	(*a) = (*b);
	(*b) = tem;
	return;
}
int main(void){
	int i , j , c;
	while(~scanf("%d" , &c)){
		int n[c];
		for(i = 0 ; i < c ; i++){
			scanf("%d" , &n[i]);
		}
		for(i = 0 ; i < c ; i++){
			for(j = 0 ; j < c - i - 1 ; j++){
				if(n[j] % 10 > n[j+1] % 10)
					swap(&n[j] , &n[j+1]);
				else if(n[j] % 10 == n[j+1] % 10)
					if(n[j] < n[j+1])
						swap(&n[j] , &n[j+1]);
			}
		}
		printf("%d" , n[0]);
		for(i = 1 ; i < c ; i++)
			printf(" %d" , n[i]);
		puts("");
	}	
	return 0;
}

