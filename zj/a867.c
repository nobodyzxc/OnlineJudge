#include<stdio.h>
#include<stdlib.h>
#define Y 15
#define X 30
int m[15][30];
struct point_{
	int x , y;
};
int neighbor_num(int y , int x){
	if(y == 0 || y == Y-1){
		if(x == 0 || x == X-1)
			return 3;
		else
			return 5;
	}
	else{
		if(x == 0 || x == X-1)
			return 5;	
		else
			return 8;
	}
}
struct point_* rtnpt(int y , int x  , int which){
    struct point_ *point;
    int all_stop , count = 0 , i , j ;
    all_stop = neighbor_num(y , x);
    for(i = -1 ; i <= 1; i++){
        for(j = -1 ; j <= 1 ; j++){
            if(i == 0 && j == 0) continue;
            if(y + i < 0 || y + i >= Y || x + j < 0 || x + j >= X) continue;
            if(which == all_stop){
                return NULL;
            }
            if(count == which){
                point = (struct point_*)malloc(sizeof(struct point_));
                point->y = y + i;
                point->x = x + j;
                return point;
            }
            count++;
        }
    }
	return NULL;
}


int cnt(int y , int x){
	struct point_ *pt;
	int Cnt , order = 0;
	Cnt = 0;
	while((pt = rtnpt(y , x , order))){
		order++;
		if(m[pt->y][pt->x] == 9){
			Cnt++;
//			printf("%d %d\n" , pt->y , pt->x);
		}
	}
	return Cnt;
}

int main(void){
	int i , j;
	char ch;
	for(i = 0 ; i < 15 ; i++){// \n
		for(j = 0 ; j < 31 ; j++){
			scanf("%c" , &ch);
			if(ch == '.') m[i][j] = 0;
			else if(ch == '*') m[i][j] = 9;
		}
	}

	for(i = 0 ; i < 15 ; i++){
		for(j = 0 ; j < 30 ; j++){
			int tem = cnt(i , j);
			if(m[i][j] == 9)
				printf("*");
			else if(tem == 0)
				printf(".");
			else
				printf("%d" , tem);
		}
		puts("");
	}
	return 0;
}

