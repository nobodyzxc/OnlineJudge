#include<stdio.h>
int main(void){
    char str[1000];
    while(~scanf("%s" , str)){
        printf("hello, %s\n" , str);
    }
    return 0;
}
