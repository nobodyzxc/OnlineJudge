#include<cstdio>
#include<cstring>
#include<algorithm>
#define LEN 1111
using namespace std;
char s1[LEN] , s2[LEN];
int lena , lenb , s1len , s2len;

int move(char base[] , char shift[]){
    int rtn = 0 , i;
    while(1){
        for(i = 0 ; i + rtn < LEN ; i++)
            if(base[i + rtn] + shift[i] > 3) break;
        if(i + rtn == LEN)
            return rtn;
        rtn++;
    }
}

int main(void){
    memset(s1 , 0 , sizeof(s1));
    memset(s2 , 0 , sizeof(s2));
    while(~scanf("%s%s" , s1 , s2)){
        s1len = strlen(s1) , s2len = strlen(s2);
        char *sp = s1;
        while(*sp) *sp -= *sp > '0' ? '0' : 0 , sp++;
        sp = s2;
        while(*sp) *sp -= *sp > '0' ? '0' : 0 , sp++;
        lena = max(s2len + move(s1 , s2) , s1len);
        lenb = max(s1len + move(s2 , s1) , s2len);
        printf("%d\n" , min(lenb , lena));
        memset(s1 , 0 , sizeof(s1));
        memset(s2 , 0 , sizeof(s2));
    }
    return 0;
}
