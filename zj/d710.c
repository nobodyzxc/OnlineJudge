#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct _car{
	char b[100] , c[100];
};
int main(void){
	char q1[100] , q2[100];
	int c , q , i , j , con = 0;
	while(~scanf("%d %d" , &c , &q)){
		if(con == 0) con = 1;
		else puts("");
		struct _car car[c];
		for(i = 0 ; i < c ; i++){
			scanf("%s %s" , car[i].b , car[i].c);
		}
		for(j = 0 ; j < q ; j++){
			scanf("%s %s" , q1 , q2);
			for(i = 0 ; i < c ; i++){
				if(q1[0] == 'b'){	
					if(!strcmp(car[i].b , q2)){
						printf("%s %s\n" , car[i].b , car[i].c);
					}
				}
				else{
					if(!strcmp(car[i].c , q2)){
						printf("%s %s\n" , car[i].b , car[i].c);
					}
				}
			}
		}

	}
	return 0;
}

