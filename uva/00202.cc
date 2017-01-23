#include<stdio.h>
#include<string.h>
int r[3001];
int m , n , cyclen , i , len;
int main(void){
    while(~scanf("%d%d" , &m , &n)){
        memset(r , 0 , sizeof(r));
        char cyc[3001] , *sp = cyc;
        cyclen = 1;
        printf("%d/%d = %d." , m , n , m / n);
        m %= n , r[m] = cyclen++ , m *= 10;
        while(m != 0){
            *sp = m / n + '0' , sp++ , m %= n;
            if(r[m % n]) break;
            r[m] = cyclen++ , m *= 10;
        }
        *sp = 0;
        for(i = 0 , len = strlen(cyc) ; i < len && i < 50 ; i++)
            printf("%s%c" , r[m] == i + 1 ? "(" : "" , cyc[i]);
        if(i < len - 1) printf("..."); 
        if(m == 0) printf("(0");
        puts(")");
        printf("   %d = number of digits in repeating cycle\n\n" , cyclen - r[m]);
    }
    return 0;
}
