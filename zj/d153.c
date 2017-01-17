#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	int t , n , sc[101] , i , j , k;
	scanf("%d" , &t);
	for(i = 0 ; i < t ; i++){
		scanf("%d" , &n);
		memset(sc , 0 , sizeof(sc));
		for(j = 0 ; j < n ; j++){
			scanf("%d" , &k);
			sc[k]++;
		}
		int acc = 0;
		if(!(n % 2)) n /= 2;
		else n = n / 2 + 1;
		for(j = 0 ; j < 101 ; j++){
			acc += sc[j];
			if(acc >= n){
				printf("%d\n" , j);
				break;
			}
		}
	}	
	return 0;
}
