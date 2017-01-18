#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void *a , const void *b){
    return *(int *)a - *(int *)b;
}

int main(void){
    char dark[111] , bright[111];
    int dc[26] , bc[26];
    while(~scanf("%s %s" , dark , bright)){
        int f = 0;
        memset(dc , 0 , sizeof(dc));
        memset(bc , 0 , sizeof(bc));
        for(unsigned int i = 0 ; i < strlen(dark) ; i++)
            dc[(dark[i] - 'A' + 25) % 26]++;
        for(unsigned int i = 0 ; i < strlen(bright) ; i++)
            bc[bright[i] - 'A']++;
        qsort(dc , 26 , sizeof(int) , cmp);
        qsort(bc , 26 , sizeof(int) , cmp);
        for(int i = 0 ; i < 26 ; i++){
            if(bc[i] != dc[i]){
                f = 1;
                break;
            }
        }
        printf("%s\n" , f ? "NO" : "YES");
    }
    return 0;
}
