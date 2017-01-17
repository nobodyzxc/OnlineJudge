#include<stdio.h>
int main(void){
	int s;
	while(~scanf("%d" , &s)){
		int a[s] , i , j , acc = 0;
		for(i = 0 ; i < s ; i++){
			scanf("%d" , &a[i]);
		}
		for(i = 0 ; i < s ; i++){
			for(j = 0 ; j < s - i - 1 ; j++){
				if(a[j + 1] < a[j]){
					int tem = a[j];
					a[j] = a[j + 1];
					a[j + 1] = tem;
					acc++;
				}
			}
		}
		printf("%d\n" , acc);
	}
	return 0;
}

