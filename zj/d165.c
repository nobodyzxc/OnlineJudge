#include<stdio.h>
#include<stdlib.h>
int s , z;
int dfs(int y , int x , int g[][z]){
	if(g[y][x] == 0) return 0;
	int acc = g[y][x] , i;
	g[y][x] = 0;
	int go[4][2] = { {0 , 1} , {0 ,-1},
					 {1 , 0} , {-1, 0} };
	for(i = 0 ; i < 4 ; i++){
		int ny = y + go[i][0] , nx = x + go[i][1];
		if((ny >= 0) && (ny < s)
				&& (nx >= 0) && (nx < z)){
			if(g[ny][nx] != 0)
				acc += dfs(ny , nx , g);
		}
	}
	return acc;
}
int main(void){
	int mount = 0 , max = 0;
	while(~scanf("%d %d", &s , &z)){
		int g[s][z] , i , j;
		for(i = 0 ; i < s ; i++)
			for(j = 0 ; j < z ; j++)
				scanf("%d" , &g[i][j]);

		for(i = 0 ; i < s ; i++)
			for(j = 0 ; j < z ; j++){
				int tem = dfs(i , j , g);
				if(tem){
			//	printf("xx %d %d => %d\n" , i , j , tem);
					mount++;
				}
				max = max < tem ? tem : max;
			}
		printf("%d\n%d\n" , mount ,  max);
		mount = 0 , max = 0;
	}
	return 0;
}

