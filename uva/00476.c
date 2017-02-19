//uva 00467
#include<stdio.h>
#include<stdlib.h>
struct _figure{
	int exist;
	float l , t , r , b;
}square[10];
int main(void){
	char tp ;
  	int	i;
	for(i = 0 ; i < 10 ; i++){
		square[i].exist = 0;
	}
	i = 0;
	while(1){
		scanf("%c" , &tp);
		if(tp == 'r'){
			scanf("%f %f %f %f" , &square[i].l , &square[i].t ,
					&square[i].r , &square[i].b);
			square[i++].exist = 1;
		}
		else if(tp == '*'){
			break;
		}
	}
	float x , y;
	int find , cnt = 0;
	while(1){
		scanf("%f %f" , &x , &y);
		if(x > 9999 && y > 9999) break;
		find = 0;
		cnt++;
		for(i = 0 ; i < 10 ; i++){
			if(square[i].exist == 0) break;
			if(x > square[i].l && x < square[i].r &&
					y < square[i].t && y > square[i].b){
				printf("Point %d is contained in figure %d\n" , cnt , i + 1);
				find = 1;
			}
		}
		if(!find){
			printf("Point %d is not contained in any figure\n" , cnt);
		}
	}

	return 0;
}

