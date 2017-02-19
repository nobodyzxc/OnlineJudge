#include<stdio.h>
#include<string.h>
void putans(char ty , int a){
	const char *UP = "an Unhappy";
	const char *HP = "a Happy";
	static int cnt = 1;
	if(ty == 'U'){
		printf("Case #%d: %d is %s number.\n" , cnt++ , a , UP);
	}
	else if(ty == 'H'){
		printf("Case #%d: %d is %s number.\n" , cnt++ , a , HP);
	}
	return;
}
void ans(int d){
	int use[100] , acc = 0 , o;
	memset(use , 0 , sizeof(use));
	o = d;
	while(o != 1){
		while(o / 10){
			acc += (o % 10) * (o % 10);
			o /= 10;
		}
		acc += o * o;
		if(acc < 100){
			if(use[acc] == 1){
				putans('U' , d);
				return;
			}
			else
				use[acc] = 1;
		}
		o = acc;
		acc = 0;
	}
	putans('H' , d);
	return;
}
int main(void){
	int c , d , i;
	scanf("%d" , &c);
	for(i = 0 ; i < c ; i++){
		scanf("%d" , &d);
		ans(d);
	}
	return 0;
}

