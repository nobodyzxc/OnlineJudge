#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int tf(int a){
	if(a == 'I')
		return 34;
	else if(a == 'O')
		return 35;
	else if(a == 'W')
		return 32;
	else if(a == 'X')
		return 30;
	else if(a == 'Y')
		return 31;
	else if(a == 'Z')
		return 33;
	if(a == 34)
		return 'I';
	else if(a == 35)
		return 'O';
	else if(a == 32)
		return 'W';
	else if(a == 30)
		return 'X';
	else if(a == 31)
		return 'Y';
	else if(a == 33)
		return 'Z';
	if(a <= 'H' && a >= 'A')
		return a - 'A' + 10;
	else if(a >= 10 && a <= 17)
		return a - 10 + 'A';
	if(a >= 'J' && a <= 'N')
		return a - 'J' + 18;
	else if(a >= 18 && a <= 22)
		return a - 18 + 'J';
	if(a >= 'P' && a <= 'V')
		return a - 'P' + 23;
	else if(a >= 23 && a <= 29)
		return a - 23 + 'P';
	return -1;
}

int find(char str[]){
	int i;
	for(i = 0 ; i < strlen(str) ; i++){
		if(str[i] == '*')
			return i;
	}
	return -1;
}
int sum(char str[]){
	int acc = 0 , i , last = strlen(str) - 1;
	if(str[0] != '*'){
		acc += tf(str[0]) / 10;
		acc += (tf(str[0])% 10) * 9;
	}
	for(i = 1 ; i < last ; i++){
		if(str[i] != '*'){
			acc += (str[i] - '0') * (9 - i);
		}
	}
	if(str[last] != '*'){
		acc += str[last] - '0';
	}
	return acc;
}
char *rvse(char str[] , int j , char vs[]){
	int i;
	for(i = 0 ; i <= strlen(str) ; i++){// '\0'
		if(str[i] != '*')
			vs[i] = str[i];
		else
			vs[i] = j + '0';
	}
	return vs;
}
int main(void){
	int j , star , acc;
	char str[100] , vs[100];
	while(~scanf("%s" , vs)){
		sprintf(str , "*%s" , vs);
		star = find(str);
		acc = sum(str);
		if(star == 0){
			for(j = 'A' ; j <= 'Z' ; j++){
			   	if(!(((tf(j) / 10) + (tf(j) % 10) * 9 + acc) % 10))
					if(tf(j) != -1){
						printf("%c" , j);
					}
			}
			puts("");
		}
	}
	return 0;
}

