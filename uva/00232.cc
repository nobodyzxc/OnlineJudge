#include<stdio.h>
#include<string.h>
char map[15][15];
int tab[15][15] , row , col , kase = 0;
bool outOfRange(int i , int j){
    return i - 1 < 0 || j - 1 < 0 || i >= row || j >= col ||
        map[i - 1][j] == '*' || map[i][j - 1] == '*';

}

int main(void){
    while(scanf("%d%d\n" , &row , &col) == 2 && row){
        int orb = 0;
        memset(tab , 0 , sizeof(tab));
        for(int i = 0 ; i < row ; i++)
                fgets(map[i] , 14 , stdin);

        for(int i = 0 ; i < row ; i++)
            for(int j = 0 ; j < col ; j++)
                if(map[i][j] != '*' && outOfRange(i , j))
                    tab[i][j] = ++orb;
        kase ? puts("") : 0;
        printf("puzzle #%d:\n" , ++kase);
        puts("Across");
        for(int i = 0 ; i < row ; i++)
            for(int j = 0 ; j < col ; j++){
                if(tab[i][j] != 0){
                    printf("%3d." , tab[i][j]);
                    while(map[i][j] != '*' && map[i][j] != '\n')
                        printf("%c" , map[i][j]) , j++;
                    puts("");
                }
            }
        puts("Down");
        for(int i = 0 ; i < row ; i++)
            for(int j = 0 ; j < col ; j++){
                if(tab[i][j] != 0){
                    int xrow = i;
                    printf("%3d." , tab[xrow][j]);
                    while(map[xrow][j] != '*' && xrow < row)
                        printf("%c" , map[xrow][j]) , tab[xrow][j] = 0 , xrow++;
                    puts("");
                }
            }
    }
    return 0;
}
