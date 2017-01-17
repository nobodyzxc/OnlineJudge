#include<stdio.h>
int main(void){
	int i , j = 1;
	char *nor = "a normal year\n";
	char *leap= "a leap year\n";
	scanf("%*d");
	while(~scanf("%d" , &i)){
		if(i%4){
			printf("Case %d: %s" , j++ , nor);
		}
		else{
			if(i%100){
				printf("Case %d: %s" , j++ , leap);	
			}
			else{
				if(i%400){
					printf("Case %d: %s" , j++ , nor);
				}
				else{
					printf("Case %d: %s" , j++ , leap);
				}
			}
		}
	}
	return 0;
}

