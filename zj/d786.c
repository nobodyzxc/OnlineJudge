#include<stdio.h>
#include<stdlib.h>
#include<string.h>
float ver(float a){
	int tem = (int)(a * 1000);
//	printf("tem %d\n" , tem);
	if(tem % 10 >= 5){
		return ((float)(tem / 10)) / 100 + 0.01;
	}
	else{
		return ((float)(tem / 10)) / 100;
	}
}
	
int main(void){
	int c , i , cc , j;
	double avg , tem;
	scanf("%d" , &c);
	for(i = 0 ; i < c ; i++){
		avg = 0 , scanf("%d" , &cc);
		for(j = 0 ; j < cc ; j++){
			scanf("%lf" , &tem);
			avg += tem;
		}
		printf("%.2lf\n" , ver(avg / (float)cc));
	}

	return 0;
}

