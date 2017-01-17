#include<stdio.h>
int main(void){
    int n , i , exp , f;
    while(~scanf("%d" , &n)){
        exp = 0 , f = 0;
        while(!(n % 2))
            exp++ , n /= 2 , f = 1;
        exp ? printf("2") : 0;
        exp > 1 ? printf("^%d" , exp) : 0;
        for(i = 3 , exp = 0 ; n != 1 ; i += 2 , exp = 0){
            while(!(n % i))
               exp++ , n /= i;
            if(exp)
                f ? printf(" * ") : 0, 
                printf("%d" , i) , f = 1;
            exp > 1 ? printf("^%d" , exp) : 0; 
        }
        puts("");
    }
    return 0;
}
