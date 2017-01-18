#include<stdio.h>
#include<string.h>
int main(void){
    int kase , ok = 0;
    scanf("%d" , &kase);
    while(kase--){
        char str[11111];
        scanf("%s" , str);
        for(int cyc = 1 , len = strlen(str) ; cyc <= len && (!ok) ; cyc++){
            if(len % cyc) continue;
            ok = 1;
            for(int segment = 0 , bk = len / cyc ; segment < bk - 1 && ok ; segment++)
                for(int pos = 0 ; pos < cyc && ok ; pos++)
                    if(str[pos] != str[pos + (segment+1) * cyc])
                        ok = 0;
            if(ok) printf("%d\n%s" , cyc , kase == 0 ? "" : "\n");
        }
        ok = 0;
    }
    return 0;
}
