#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
int main(void){
	int n;
	scanf("%d" , &n);
	puts(n % 4 ? "fat" : "egg");
	return 0;
}
