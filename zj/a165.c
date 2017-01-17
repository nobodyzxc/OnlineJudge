#include<stdio.h>
int issum(int i){
	int acc , j;
	int use[9] = { 0 };
	if(i % (100000) / 10000 != 5){
		return 0;
	}
	for(j = 100000000 ; j >= 1 ; j /= 10){
		if((acc = i % (j*10)/ j) == 0)
			return 0;
		else{
			if(use[acc - 1] == 0)
				use[acc - 1] = 1;
			else
				return 0;
		}
	}
	return 1;
}
int main(void){
	int i , k , l;
	for(i = 100000000 ; i < 1000000000 ; i++){
		if(issum(i))
		for(k = 10000000 , l = 2 ; k >= 1 ; k /= 10 , l++){
			if(i / k % l){
				break;
			}
			else{
				if(l == 9){
					printf("%d\n" , i);
					return 0;
				}
			}
		}
	}
	return 0;
}

