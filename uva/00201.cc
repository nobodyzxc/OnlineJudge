#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int kase = 0 , bord , tk , map[11][11][2];//H|V

bool isSq(int y , int x , int l){
    bool rtn = true;
    for(int i = 0 ; i < l ; i++)
        rtn &= map[y][x + i][0] ,
        rtn &= map[y + l][x + i][0] ,
        rtn &= map[y + i][x][1] ,
        rtn &= map[y + i][x + l][1];
    return rtn;
}

int main(void){
    while(cin >> bord >> tk){
        char d; int i , j;
        memset(map , 0 , sizeof(map));
        while(tk--){
            cin >> d >> i >> j;
            if(d == 'V') swap(i , j);
            map[i - 1][j - 1][d == 'H' ? 0 : 1] = 1;
        }
        if(kase) puts("\n**********************************\n");
        printf("Problem #%d\n\n" , ++kase);
        bool ex = 0;
        for(int l = 1 ; l < bord ; l++){
            int cnt = 0;
            for(int x = 0 ; x < bord - l ; x++)
                for(int y = 0 ; y < bord - l ; y++){
                    cnt += isSq(y , x , l);
                }
            if(cnt) printf("%d square (s) of size %d\n" , cnt , l) , ex = true;
        }
        if(!ex) puts("No completed squares can be found.");
    }
    return 0;
}
