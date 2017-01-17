#include<stdio.h>
int main(void){
	int i;
	char *nor = "a normal year";
	char *leap= "a leap year";
	while(~scanf("%d" , &i)){
		if(i%4){
			puts(nor);
		}
		else{
			if(i%100){
				puts(leap);
			}
			else{
				if(i%400){
					puts(nor);
				}
				else{
					puts(leap);
				}
			}
		}
	}
	return 0;
}

