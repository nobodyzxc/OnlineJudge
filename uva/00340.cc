#include<stdio.h>
#define mx 1111
int des[mx] , nm[mx];
int main(void){
    int len , kase = 0;
    while(~scanf("%d" , &len) && len){
        printf("Game %d:\n" , ++kase);
        for(int i = 0 ; i < len ; i++)
            scanf("%d" , &des[i]);
        while(1){
            int a = 0 , b = 0;
            for(int i = 0 ; i < len ; i++)
                scanf("%d" , &nm[i]) , a += nm[i] == des[i] ? 1 : 0;
            if(!nm[0]) break;
            for(int dig = 0 ; dig < 10 ; dig++){
                int desC = 0 , nmC = 0;
                for(int j = 0 ; j < len ; j++){
                    if(des[j] == dig) desC++;
                    if(nm[j] == dig) nmC++;
                }
                b += desC > nmC ? nmC : desC;
            }
            b -= a;
            printf("    (%d,%d)\n" , a , b);
        }
    }
    return 0;
}
