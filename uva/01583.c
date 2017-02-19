#include<stdio.h>
#include<string.h>
#define rag 100001
int ans[rag];
int main(){
    memset(ans , 0 , sizeof(ans));
    for(int i = 1 ; i < rag ; i++){
        int d = i , dg = i;
        while(d > 0) dg += d % 10 , d /= 10;
        if(ans[dg] == 0 || ans[dg] > i) ans[dg] = i;
    }
    int kase , req;
    scanf("%d" , &kase);
    for(int i = 0 ; i < kase ; i++){
        scanf("%d" , &req);
        printf("%d\n" , ans[req]);
    }
    return 0;
}
