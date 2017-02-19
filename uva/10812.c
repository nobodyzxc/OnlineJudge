#include<stdio.h>
#include<stdlib.h>
int main(void){
	int s , d , c , i;
	scanf("%d" , &c);
	for(i = 0 ; i < c ; i++){
		scanf("%d %d" , &s , &d);
		//a + b = s
		//a - b = d
		if((s < 0) || (d < 0) || (s < d)){
			puts("impossible");
			continue;
		}
		if((s + d) % 2){
			puts("impossible");
			continue;
		}
		printf("%d %d\n" , (s + d) / 2 , (s - d) / 2);
		//quest a & b
	}
	return 0;
}

