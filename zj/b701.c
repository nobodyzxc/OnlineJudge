#include<stdio.h>
int N , S , W , E , A , n , m;
int y[] = { 1 , 0 , -1 ,  0 };
int x[] = { 0 , 1 ,  0 , -1 };
void search(int map[][m] , int _y , int _x){
	map[_y][_x] = 0 ; A++;
	S = S > _y ? S : _y;
	N = N < _y ? N : _y;
	E = E > _x ? E : _x;
	W = W < _x ? W : _x;
	int i;
	for(i = 0 ; i < 4 ; i++)
		if(_y + y[i] >= 0 && _y + y[i] < n &&
				_x + x[i] >= 0 && _x + x[i] < m)
			if(map[_y + y[i]][_x + x[i]])
				search(map , _y + y[i]  , _x + x[i]);
	return;
}
int main(void){
	scanf("%d %d" , &n , &m);
	int map[n][m] , i , j;
	for(i = 0 ; i < n ; i++)
		for(j = 0 ; j < m ; j++)
			scanf("%d" , &map[i][j]);
	for(i = 0 ; i < n ; i++)
		for(j = 0 ; j < m ; j++)
			if(map[i][j]){
				A = 0 , N = S = i , W = E = j , search(map , i , j);
				printf("%d %d %d %d %d\n" , W , N , E , S , A);
			}
	return 0;
}
