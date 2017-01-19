#include<cstdio>
#include<cstring>
#define mx 100
int left , chc , rnd , stat , ansLen;
char ans[mx] , gus[mx] , 
     msg[][30] = {"You lose." , "You chickened out." , "You win."};

bool guess(char ch){
    bool chLeft = 0 , rtn = false , hit = false;
    for(int i = 0 ; i < ansLen ; i++)
       (ans[i] = ans[i] - ch ? ans[i] : 0*(hit = true)) , chLeft |= ans[i];
    if(!hit) chc++;
    if(!chLeft) stat = 1 , rtn = true;
    if(chc >= 7 && (!stat)) stat = -1 , rtn = true;
    return rtn;
    
}

int main(void){
    while(scanf("%d%s%s" , &rnd , ans , gus) == 3 && rnd != -1){
        printf("Round %d\n" , rnd);
        stat = 0 , chc = 0 , ansLen = strlen(ans);
        for(int i = 0 , len = strlen(gus); i < len ; i++)
            if(guess(gus[i])) break;
        puts(msg[stat + 1]);
    }
    return 0;
}
