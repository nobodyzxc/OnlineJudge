#include<stdio.h>
int main(){
    int m , f , k , acc , i , tmp;
    while(~scanf("%d%d%d" , &m , &f , &k)){
        acc = m + f;
        for(i = 0 ; i < k ; i++){
            tmp = f;
            acc += f , acc %= 100000007;
            f += m;
            m = tmp; 
        }
        printf("%d\n" , acc);
    }
    return 0;
}
