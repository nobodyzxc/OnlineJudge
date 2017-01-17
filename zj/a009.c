#include<stdio.h>
#include<string.h>
int main(void){
    char str[1111];
    while(gets(str)){
        int i;
        for(i = 0 ; i < strlen(str) ; i++)
            str[i] -= ('1' - '*');
        puts(str); 
    }
    return 0;
}
