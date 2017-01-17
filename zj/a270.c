#include<stdio.h>
#include<string.h>
int t[6][6];
int req(int a , int b){
	if(t[a][b] != -1) return t[a][b];
	else{
		if(a > b){
			t[a][b] = t[a][a-1] + req(a - 1 , b);
			return t[a][b];
		}
		else{
			t[a][b] = req(a , b - 1) + t[b-1][b];
			return t[a][b];
		}
	}
}
int main(void){
	int uc , a , b , i , j , flag;
	while(~scanf("%d" , &uc)){
		flag = 0;
		memset(t , -1 , sizeof(t));
		for(i = 1 ; i < 6 ; i++)
			t[i][i] = 0;
		for(i = 1 ; i < 5 ; i++)
			scanf("%d" , &t[i][i+1]) , t[i+1][i] = t[i][i+1];
		scanf("%d" , &a);
		for(i = 0 ; i < 7 ; i++){
			scanf("%d" , &b);
			if(req(a , b) > uc) flag = 1;
			a = b;
		}
		flag == 1 ? puts("no") : puts("yes");
	}
	return 0;
}
/*
 *  0 1 2 3 4 5
 *0 x x x x x x
 *1 x 0 q
 *2 x q 0 q
 *3 x   q 0 q
 *4 x     q 0 q
 *5 x       q 0
 */
