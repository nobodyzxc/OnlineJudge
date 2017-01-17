#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n[4];
int big(int n[]){
	if(n[1] > n[2] && n[1] > n[3])
		return 1;
	else if(n[2] > n[1] && n[2] > n[3])
		return 2;
	else if(n[3] > n[2] && n[3] > n[1])
		return 3;
	return -1;
}
int sml(int n[]){
	if(n[1] < n[2] && n[1] < n[3])
		return 1;
	else if(n[2] < n[1] && n[2] < n[3])
		return 2;
	else if(n[3] < n[2] && n[3] < n[1])
		return 3;
	return -1;
}
int mid(int n[]){
	int i;
	for(i = 1 ; i < 4 ; i++){
		if(big(n) != i && sml(n) != i)
			return i;
	}
	return -1;
}

int se(int n[]){
	if(n[mid(n)] == n[sml(n)]) return big(n);
	if(n[big(n)] - n[sml(n)]> n[mid(n)]){
		return big(n);
	}
	else
		return mid(n);
}

int main(void){
	while(~scanf("%d %d %d" , &n[1] , &n[2] , &n[3])){
		switch(se(n)){
			case 1:
				puts("A");
				break;
			case 2:
				puts("B");
				break;
			case 3:
				puts("C");
				break;
		}
	}	
	return 0;
}

