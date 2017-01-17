#include<stdio.h>
int main(void){
	char *a = "At School";
	char *o = "Off School";
	int h , m;
	scanf("%d %d" ,  &h , &m);
	if(h < 7 || (h >= 17)) puts(o);
	else{
		if(h == 7 && m < 30) puts(o);
		else{
			puts(a);
		}
	}
	return 0;
}

