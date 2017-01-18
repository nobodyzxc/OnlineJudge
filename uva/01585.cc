#include<cstdio>
#include<string.h>
int main(void){
    int kase;
    char sc[1111];
    scanf("%d" , &kase);
    while(kase--){ 
        scanf("%s" , sc);
        int acc = 0 , cum = 0 , len = strlen(sc);
        for(int i = 0 ; i < len ; i++)
            if(sc[i] == 'O')
                cum++ , acc += cum;
            else
                cum = 0;
        printf("%d\n" , acc);
    }
    return 0;
}
