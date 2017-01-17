#include<stdio.h>
#define ll long long
void sort(ll t[]){
	int i , j;
	ll tem;
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
	ll t[3];
	int j;
	for(j = 0 ; j < 3 ; j++){
		scanf("%lld" , &t[j]);
		if(t[j] < 0) return 0;
	}
	sort(t);
	if(t[2] >= t[1] + t[0]) return 0;
	if(t[2]*t[2] == t[1]*t[1] + t[0]*t[0]){
		puts("right triangle");
	}
	else if(t[2]*t[2] < t[1]*t[1] + t[0]*t[0]){
		puts("acute triangle");
	}
	else if(t[2]*t[2] > t[1]*t[1] + t[0]*t[0]){
		puts("obtuse triangle");
	}
	return 0;
}

