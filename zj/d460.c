#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	int year;
	scanf("%d" , &year);
	printf("%d\n" , 890 - 890 * (year <= 5) - 300 * (year >= 6 && year <= 11) - 100 * (year >= 12 && year <= 17) - 491 * (year >= 60));
	return 0;
}

