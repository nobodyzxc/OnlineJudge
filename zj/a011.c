#include<stdio.h>
#include<string.h>
char string[100];
int words=0;
char *non=" ";
int main(void){
	fgets(string,sizeof(string),stdin);
	while(strtok(string,non)!=NULL)
		words++;
	printf("%d\n",words);
	return 0;
}
