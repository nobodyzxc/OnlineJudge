#include<stdio.h>
#include<stdlib.h>
int main(void){
	int C , c , acc , bst , i , j;
	scanf("%d" , &C);
	for(i = 0 ; i < C ; i++){
		scanf("%d" , &c);
		if(i != 0) puts("");
		printf("Track %d:\n" , i + 1);
		bst = 500000 , acc = 0;
		for(j = 0 ; j < c ; j++){
			int m , s;
			scanf("%d %d" , &m , &s);
			if(bst > m * 60 + s)
				bst = m * 60 + s;
			acc += m * 60 + s;
		}
		printf("Best Lap: %d minute(s) %d second(s).\n" , bst / 60 , bst % 60);
		printf("Average: %d minute(s) %d second(s).\n" , acc / 60 / c , (acc/c) % 60);
	}
	return 0;
}

