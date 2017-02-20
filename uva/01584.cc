#include<cstdio>
#include<cstring>
char cir[1111];
int main(void){
    int kase , n;
    scanf("%d" , &kase);
    while(kase--){
        scanf("%s" , cir);
        int n = strlen(cir) , min = 0;
        for(int i = 1 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(cir[(i + j) % n] == cir[(min + j) % n]) continue;
                else if(cir[(i + j) % n] < cir[(min + j) % n])
                    min = i;
                break;
            }
        }
        for(int i = 0 ; i < n ; i++)
            printf("%c" , cir[(min + i) % n]);
        puts("");
    }
    return 0;
}
