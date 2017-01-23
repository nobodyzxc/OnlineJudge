#include<cstdio>
char s[1000000] , t[1000000] , *sp , *tp;
int main(void){
    while(~scanf("%s %s" , s , t)){
        for(sp = s , tp = t ; *tp && *sp ;
                sp += (*sp - *tp ? 0 : 1) , tp++);
        puts(*sp ? "No" : "Yes");
    } 
    return 0;
}
