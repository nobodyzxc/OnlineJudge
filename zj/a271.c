#include<stdio.h>
#include<stdlib.h>
int main(void){
	int x , y , z , w , n , m , c , i , carrot;
	int ptr , ssn;
	char day[100];
	scanf("%d" , &c);
	for(i = 0 ; i < c ; i++){
		scanf("%d %d %d %d %d %d" , &x , &y , &z , &w , &n , &m);
		printf("x %d y %d z %d w %d n %d m %d \n" , x , y , z , w , n , m);
		fgets(day , sizeof(day) , stdin);
		fgets(day , sizeof(day) , stdin);
		printf("%s" , day);
		if(day[0] == '\n') printf("%d\n" , m);
		else{
			ptr = 0;
			while(~sscanf(day + ptr , "%d%n" , &carrot , &ssn)){ 
				ptr += ssn;
				printf("-%d-\n" , carrot );
			}
		}
		puts("");
	}
	return 0;
}

