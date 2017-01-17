#include<stdio.h>
int main(void){
	int h , m;
	scanf("%d %d" , &h , &m);
	int carry;
	carry = (m + 30) / 60;
	m = (m + 30) % 60;
	h = 2 + carry + h;
	h = h % 24;
	printf("%02d:%02d\n" , h , m);
	return 0;
}

