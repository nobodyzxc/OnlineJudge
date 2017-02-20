#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

struct Direction{
    int y , x;
} dir[4] = {
    { .y = -1 , .x = 0 } ,
    { .y =  1 , .x = 0 } ,
    { .y =  0 , .x =-1 } ,
    { .y =  0 , .x = 1 }
};

struct Chess{
    int x , y;
    char type;
    void normalize(){
        x -= 1 , y -= 1;
    }
};

int rn , map[10][9];
Chess genX;

int legal(int y , int x){
    return y <= 2 && y >= 0 && x <= 5 && x >= 3;
}

//check too dirty , should Reverse Thinking
//let "black general" go , by the other chess's method
bool check(vector<Chess> &red , int genNxtY , int genNxtX){
    for(int i = 0 ; i < rn ; i++){
        if(red[i].y == genNxtY && red[i].x == genNxtX)
            continue;//gen eats

        if(red[i].type == 'G'){//general
            if(red[i].x == genNxtX){
                bool empty = true;
                for(int j = red[i].y - 1 ; j > genNxtY ; j--)
                    empty &= (!map[j][genNxtX]);
                if(empty) return true;
            }
        }
        else if(red[i].type == 'C'){//cannon
            int mtn = 0;
            if(red[i].x == genNxtX){
                for(int j = min(red[i].y , genNxtY) + 1 ;
                        j < max(red[i].y , genNxtY) ; j++){
                    if(map[j][genNxtX]) mtn++;
                }
            }
            else if(red[i].y == genNxtY){
                for(int j = min(red[i].x , genNxtX) + 1 ;
                        j < max(red[i].x , genNxtX) ; j++){
                    if(map[genNxtY][j]) mtn++;
                }
            }
            if(mtn == 1) return true;
        }
        else if(red[i].type == 'R'){//car
            bool empty = true;
            if(red[i].x == genNxtX){
                for(int j = min(red[i].y , genNxtY) + 1 ;
                        j < max(red[i].y , genNxtY) ; j++){
                    empty &= (!map[j][genNxtX]);
                }
                if(empty) return true;
            }
            else if(red[i].y == genNxtY){
                for(int j = min(red[i].x , genNxtX) + 1 ;
                        j < max(red[i].x , genNxtX) ; j++){
                    empty &= (!map[genNxtY][j]);
                }
                if(empty) return true;
            }
        }
        else if(red[i].type == 'H'){//horse
            int dy = abs(red[i].y - genNxtY) , dx = abs(red[i].x - genNxtX);
            if(dy + dx == 3 && dx && dy){
                if(dx == 2){
                    if(!map[red[i].y][(red[i].x + genNxtX) / 2])
                        return true;
                }
                else if(dy == 2){
                    if(!map[(red[i].y + genNxtY) / 2][red[i].x])
                        return true;
                }
            }
        }
    }
    return false;
}

int main(void){
    while(cin >> rn >> genX.y >> genX.x && rn != 0){
        memset(map , 0 , sizeof(map));
        genX.normalize();// , map[genX.y][genX.x] = 2;
        vector<Chess> red;
        for(int i = 0 ; i < rn ; i++){
            Chess r;
            cin >> r.type >> r.y >> r.x;
            r.normalize() , red.push_back(r) , map[r.y][r.x] = 1;
        }
        bool checkmate = true;
        for(int i = 0 ; i < 4 ; i++){
            int y = genX.y + dir[i].y , x = genX.x + dir[i].x;
            if(legal(y , x))
                checkmate &= check(red , y , x);
        }
        puts(checkmate ? "YES" : "NO");
    }
    return 0;
}
