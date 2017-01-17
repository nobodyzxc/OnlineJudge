#include<stdio.h>
#include<stdlib.h>
int Pow(int e , int x){
	int i , acc = 1;
	if(x == 0) return 1;
	for(i = 0 ; i < x ; i++){
		acc *= e;
	}
	return acc;
}
int Nlen(int num){
	int l = 0;
	while(num){
		l++;
		num /= 10;
	}
	return l;
}
int find(int num){
	int origin = num , acc = 0 , len = Nlen(num);
	while(num){
		acc += Pow(num % 10 , len);
		num /= 10;
	}	
	if(origin == acc){
		return 1;
	}
	else{
		return 0;
	}
}
int main(void){
	int n , m , i , F;
	while(~scanf("%d %d" , &n , &m)){
		F = 0;
		for(i = n ; i <= m ; i++){
			if(find(i)){
				if(F == 0){
					printf("%d" , i);
					F = 1;
				}
				else
					printf(" %d" , i);
			}
		}
		if(F == 0) printf("none");
		puts("");
	}
	return 0;
}

