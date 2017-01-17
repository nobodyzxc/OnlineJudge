#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	int h1 , m1 , h2 , m2 , m3;
	int c , i;
	scanf("%d" , &c);
	for(i = 0 ; i < c ; i++){
		scanf("%d %d %d %d %d" , &h1 , &m1 , &h2, &m2 , &m3);
		m2 = m2 + (h2 - h1) * 60;
		if((m2 - m1) >= m3)
			puts("Yes");
		else
			puts("No");
	}
	return 0;
}

