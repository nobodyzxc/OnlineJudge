#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(void){
	int man[100009];
	int n , i , nn , w , l;
	while(~scanf("%d" , &n)){
		for(i = 0 ; i < n ; i++){
			scanf("%d %d" , &l , &nn);
			int j;
			for(j = 0 ; j < nn ; j++){
				scanf("%d" , &w);
				man[w] = l;
			}	
		}
		scanf("%d" , &w);
		printf("%d\n" , man[w]);
	}
	return 0;
}

