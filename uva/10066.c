#include<stdio.h>
#include<string.h>
#define MAX(a , b) (a > b ? a : b)
int main(void){
    int a , b , acc = 0;
    while(scanf("%d%d" , &a , &b) && (a || b)){
        int ta[a + 1] = {0} , tb[b + 1] = {0} , dp[a + 1][b + 1];
        memset(dp , 0 , sizeof(dp));
        for(int i = 1 ; i <= a ; i++)
            scanf("%d" , &ta[i]);
        for(int i = 1 ; i <= b ; i++)
            scanf("%d" , &tb[i]);
        for(int i = 1 ; i <= a ; i++)
            for(int j = 1 ; j <= b ; j++)
                if(ta[i] == tb[j])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = MAX(dp[i - 1][j] , dp[i][j - 1]);
        printf("Twin Towers #%d\n" , ++acc);
        printf("Number of Tiles : %d\n\n" , dp[a][b]);
    }
    return 0;
}
