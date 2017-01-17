#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	char str[10000];
	int n , ptr , lbl;
   	double num , acc;
	while(gets(str)){
		ptr = 0 , acc = 0;
		while(~sscanf(str+ptr , "%d%*c%lf%n" , &lbl , &num , &n)){
			ptr += n;
		//	printf("%d : %lf\n" , lbl , num);
			if(lbl % 2) acc += num;
			else acc -= num;
		}
		printf("%g\n" ,acc);
	}
	return 0;
}

