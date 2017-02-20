#include<cstdio>
#include<algorithm>
using namespace std;
char tab[5][8] , ch;

struct direction { int y , x; } d[4] = {
    { .y = -1 , .x = 0 } ,
    { .y =  1 , .x = 0 } ,
    { .y =  0 , .x =-1 } ,
    { .y =  0 , .x = 1 }
} , empty;

int dirIdx(char c){
    if(c == 'A') return 0;
    else if(c == 'B') return 1;
    else if(c == 'L') return 2;
    else if(c == 'R') return 3;
    else return -1;
}

bool inRnage(int y , int x){
    return y >= 0 && y < 5 && x >= 0 && x < 5;
}

int printTab(void){
    for(int i = 0 ; i < 5 ; i++ , puts(""))
        for(int j = 0 ; j < 5 ; j++)
            printf("%s%c" , j ? " " : "" , tab[i][j]);
    return 0;
}

bool moveTab(int c){
    int newY = empty.y + d[dirIdx(c)].y ,
        newX = empty.x + d[dirIdx(c)].x;
    if(dirIdx(c) == -1 || (!inRnage(newY , newX))) return false;
    swap(tab[empty.y][empty.x] , tab[newY][newX]);
    empty.y = newY;
    empty.x = newX;
    return true;
}

int main(void){
    int kase = 0;
    while(1){
        int valid = 1;
        for(int i = 0 ; i < 5 ; i++)
            if(!fgets(tab[i] , 8 , stdin)) return 0;
            else if(tab[i][4] == '\n') tab[i][4] = ' ';
        for(int i = 0 ; i < 25 ; i++)
            if(tab[i / 5][i % 5] == ' ') empty.y = i / 5 , empty.x = i % 5;
        kase ? puts("") : 0;
        printf("Puzzle #%d:\n" , ++kase);
        while(1){
            while((ch = getchar()) == '\n' || ch == ' ');
            if(ch == '0') break;
            if(!moveTab(ch)) valid = 0;
        }
        valid ? printTab() : puts("This puzzle has no final configuration.");
        getchar();
    }
    return 0;
}
