#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	char str[300];
	double d , b;
	while(fgets(str , sizeof(str) , stdin)){
		str[10] = '\0';
		sscanf(str , "%lf" , &d);
		int a =(int)(d*1000) % 10;
		if(abs(a) >= 5) b = 0.01;
		else b = 0;
		a = (int)(d*100);
		d = a;
		d /= 100;
		d >= 0 ? (d += b) : (d -=b);
		printf("%.2lf\n" , d); 
	}
	return 0;
}

