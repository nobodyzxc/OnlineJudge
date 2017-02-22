#include<cstdio>
#include<cstring>
int que[20] , n , k , m;

void give(int &who , int gap , int dir){
    for(int i = 0 ; i < gap ; i++){
        do { who += dir , who += n , who %= n; }while(que[who]);
    }
}

int main(void){
    while(~scanf("%d%d%d" , &n , &k , &m) && n && k && m){
        memset(que , 0 , sizeof(que));
        int A = n - 1 //count on first man first time
            , B = 0 //count on on last man first time
            , left = n;
        while(left){
            give(A , k , 1);
            give(B , m , -1);
            printf("%3d" , A + 1) , left--;
            if(A - B) printf("%3d" , B + 1) , left--;
            if(left) printf(",");
            que[A] = 1 , que[B] = 1;
        }
        puts("");
    }
    return 0;
}
