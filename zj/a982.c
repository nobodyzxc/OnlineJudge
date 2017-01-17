#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//start 2 , 2 stop n - 1 , n - 1
int my[] = { 1 , 0 , -1 , 0 };
int mx[] = { 0 , 1 , 0 , -1 };
int min = 1000000000 , n;
char **map;
int **step;
void travel(int y , int x , int acc){
	int i , ny , nx;
	acc++;
//	for(i = 0 ; i < acc ; i++) printf(" ");
//	printf("%d %d\n" , y , x);
	if(y == n - 2 && x == n - 2){
 		if(min > acc)min = acc;
	   return;
	}
	step[y][x] = 1;
	for(i = 0 ; i < 4 ; i++){
		ny = y + my[i] , nx = x + mx[i];
		if(ny > n || ny < 0 || nx > n || nx < 0) continue;
		if(step[ny][nx] == 0 && map[ny][nx] == '.'){
			step[ny][nx] = 1;
		   	travel(ny , nx , acc);
		   	step[ny][nx] = 0;
		}
	}
	return;
}
int main(void){
	int i , j;
	scanf("%d\n" , &n);
	map = (char**)malloc(n*sizeof(char*) + n*n*sizeof(char));
	step = (int **)malloc(n*sizeof(void*) + n*n*sizeof(int));
	char *mloc = (char*)(map + n);
	int *Imloc = (int*)(step + n);
	for(i = 0 ; i < n ; i++ , mloc += n , Imloc += n)
		map[i] = mloc , step[i] = Imloc;
	for(i = 0 ; i < n ; i++)
		gets(map[i]);
	for(i = 0 ; i < n ; i++)
		for(j = 0 ; j < n ; j++)
			step[i][j] = 0;
	travel(1 , 1 , 0);
	printf("%d\n" , min);
	free(map);
	return 0;
}
