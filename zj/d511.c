#include<stdio.h>
void sort(int t[]){
	int i , j , tem;
	for(i = 0 ; i < 3 ; i++){
		for(j = 0 ; j < 2 - i ; j++){
			if(t[j + 1] < t[j]){
				tem = t[j];
				t[j] = t[j + 1];
				t[j + 1] = tem;
			}
		}
	}
	return;
}

int main(void){
	int t[3];
	int i , j , cnt = 0;
	for(i = 0 ; i < 5 ; i++){
		for(j = 0 ; j < 3 ; j++){
			scanf("%d" , &t[j]);
		}
		sort(t);
		if(t[2] < t[1] + t[0]){
			cnt++;
		}
	}
	printf("%d\n" , cnt);
	return 0;
}

