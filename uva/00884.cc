#include<cstdio>
int num[1000001] = {0} , ans[1000001] = {0} , input , acc , cur , i , j;
int main(void){
    for(i = 2 ; i <= 1000000  ; i++){
        acc = 1 , cur = i;
        for(j = 2 ; j * j <= cur ; j++){
            if(cur == 1 || cur == j) break;
            while((!(cur % j)) && (cur > j)) acc++ , cur /= j;
        }
        num[i] = acc;
    }
    for(i = 2 ; i <= 1000000 ; i++)
        ans[i] = ans[i - 1] + num[i];
    while(~scanf("%d" , &input))
        printf("%d\n" , ans[input]);
    return 0;
}
