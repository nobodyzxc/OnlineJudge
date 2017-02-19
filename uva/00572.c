#include<stdio.h>
#include<stdlib.h>
int s , z;
int go[8][2] = { {0 , 1} , {0 ,-1} ,
					 {1 , 0} , {-1, 0} ,
					 {1 , 1} , {1 ,-1} ,
					 {-1, 1} , {-1,-1} };
int dfs(int z , int y , int x , int **g){
	if(g[y][x] == 0) return 0;
	int acc = g[y][x] , i;
	g[y][x] = 0;
	for(i = 0 ; i < 8 ; i++){
		int ny = y + go[i][0] , nx = x + go[i][1];
		if((ny >= 0) && (ny < s)
				&& (nx >= 0) && (nx < z)){
			if(g[ny][nx] != 0)
				acc += dfs(z , ny , nx , g);
		}
	}
	return acc;
}
int main(void){
	int mount = 0;
	char ch;
	while(~scanf("%d %d\n", &s , &z)){
		if(s == 0) break;
		int **g , i , j;
        g = new int*[s];
        for(i = 0 ; i < s ; i++)
            g[i] = new int[z];

		for(i = 0 ; i < s ; i++)
			for(j = 0 ; j < z + 1 ; j++){
				scanf("%c" , &ch);
				if(ch == '*') g[i][j] = 0;
				else if(ch == '@') g[i][j] = 1;
				else continue;
			}
		for(i = 0 ; i < s ; i++)
			for(j = 0 ; j < z ; j++){
				int tem = dfs(z , i , j , g);
				if(tem)  mount++;
			}
        for(i = 0 ; i < s ; i++)
            delete [] g[i];
        delete [] g;
		printf("%d\n" , mount);
		mount = 0;
	}
	return 0;
}
