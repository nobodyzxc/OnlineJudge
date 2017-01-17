#include<stdio.h>
int cs , c , acc , i , max = 0;
int main(void){
	scanf("%d" , &cs);
	acc = 0;
	for(i = 0 ; i < cs ; i++){
		scanf("%*d %d" , &c);
		if(c) acc++;
		else acc--;
		if(max < acc) max = acc;
	}
	printf("%d\n" , max);	
	return 0;
}

