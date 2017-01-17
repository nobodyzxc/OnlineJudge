#include<stdio.h>
#include<math.h>
int main(void){
	int r , n , i;
	double tem;
	while(~scanf("%d %d" , &r , &n)){
		tem = round((double) n / (double) r);
		printf("%d:%02d\n" , (int)(tem / 60) , (int)tem % 60);
		for(i = 0 ; i < n ; i++){
			scanf("%*d");
		}
	}	
	return 0;
}

