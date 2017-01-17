#include<stdio.h>
int main(void){
    int dp[31] = {1 , 2} , in;
    for(int i = 2 ; i < 31 ; i++){
        if(i % 2) dp[i] = dp[i - 1] * 2 + dp[i - 2];
        else dp[i] = dp[i - 1] + dp[i - 2];
    }
    while(1){
        scanf("%d" , &in);
        if(in == -1) break;
        printf("%d\n" , in % 2 ? 0 : dp[in]);
    }
    return 0;
}
