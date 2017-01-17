#include<stdio.h>
int ifleap(int i){
	if(i%4){
		return 0;		
	}
	else{
		if(i%100){
			return 1;
		}
		else{
			if(i%400){
				return 0;
			}
			else{
				return 1;
			}
		}
	}
	return - 1;
}
int main(void){
	int a , b , i ,cnt = 0;
	while(~scanf("%d %d" , &a , &b)){
		cnt = 0;
		for(i = a ; i <= b ; i++){
			cnt += ifleap(i);
		}
		printf("%d\n" , cnt);	
	}
	return 0;
}

