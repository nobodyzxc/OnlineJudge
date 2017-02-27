#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int find(int *boss , int who){
	return who == boss[who] ? who : (boss[who] = find(boss , boss[who]));
}

void unset(int *boss , int *mber , int m1 , int m2 , int n){
// union set
	int max , min;
	int boss_m1 = find(boss , m1) , boss_m2 = find(boss , m2);
	boss_m1 > boss_m2 ? (max = boss_m1 , min = boss_m2) : (max = boss_m2 , min = boss_m1);
	boss[min] = boss[max];
	mber[max] += mber[min];
	mber[min] = 0;
	return;
}

int main(void){
	int i , n , m , q , *boss // represent root
	   					, *mber //represent the size of set
						, m1 , m2;

	scanf("%d %d %d" , &n , &m , &q);
	boss = (int *)malloc((n + 1) * sizeof(int));
	mber = (int *)malloc((n + 1)* sizeof(int));
	for(i = 0 ; i <= n ; i++){
		boss[i] = i;
		mber[i] = 1;
	}

	for(i = 0 ; i < m ; i++){
		scanf("%d %d" , &m1 , &m2);
		unset(boss , mber , m1 , m2 , n);
	}

	for(i = 0 ; i < q ; i++){
		scanf("%d %d" , &m1 , &m2);
		puts(find(boss , m1) == find(boss , m2) ? ":)" : ":(");
	}
    return 0;
}
