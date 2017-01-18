#include<stdio.h>
#include<string.h>
int main(void){
    int kase , dig[10] , nums;
    scanf("%d" , &kase);
    while(kase--){
        scanf("%d" , &nums);
        memset(dig , 0 , sizeof(dig));
        for(int i = 1 , tmp = i ; i <= nums ; i++ , tmp = i)
            while(tmp)
                dig[tmp % 10]++ , tmp /= 10;
        for(int i = 0 ; i < 10 ; i++)
            printf("%s%d" , i ? " " : "" , dig[i]);
        puts("");
    }

    return 0;
}
