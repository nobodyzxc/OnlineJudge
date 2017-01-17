#include<stdio.h>
int main(){
    int ch , f = 1;
    while(~(ch = getchar())){
        if(ch == '"') printf("%s" , f ? "``" : "''") , f = !f;
        else printf("%c" , ch);
    }
    return 0;
}
