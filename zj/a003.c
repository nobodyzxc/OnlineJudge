#include<stdio.h>
int main(void){
    int m , d;
    char str[3][10] = { "普通" , "吉" , "大吉" };
    while(~scanf("%d%d" , &m , &d))
        puts(str[(2*m + d) % 3]);
    return 0;
}
