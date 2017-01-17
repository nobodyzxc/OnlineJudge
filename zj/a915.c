#include<stdio.h>
#include<stdlib.h>

struct point{
	int x , y;
};

int cmp(const void *a , const void *b){
	int rtn = (*(struct point *)a).x - (*(struct point *)b).x;
	if(rtn != 0) return rtn;
	else return (*(struct point *)a).y - (*(struct point *)b).y;
}

int main(void){
	int i , n , x , y;
	scanf("%d" , &n);
	struct point pt[n];
	for(i = 0 ; i < n ; i++)
		scanf("%d %d" , &pt[i].x , &pt[i].y);	
	qsort(pt , n , sizeof(struct point) , cmp);
	for(i = 0 ; i < n ; i++)
		printf("%d %d\n" , pt[i].x , pt[i].y);
	return 0;
}
