#include<stdio.h>
#include<string.h>
char tab[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;;'ZXCVBNM,./";
int main(){
    char c , *rtn;
    while(~(c = getchar())){
       rtn = strchr(tab , c);
        if(rtn) putchar(*(rtn - 1));
        else putchar(c);
    }
    return 0;
}
    
