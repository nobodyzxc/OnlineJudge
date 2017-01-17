#include<stdio.h>
#include<stdlib.h>
int n , m;
int cmp(const void *a , const void *b){
	return ( *(int *)a - *(int *)b);
}

void pary(int a[]){
	int i;
	for(i = 0 ; i < m ; i++){
		if(i == 0) printf("%d" , a[i]);
		else printf(" %d" , a[i]);
	}
	puts("");
	return;
}

void ex(int v[] , int a[] , int p , int c){
	int i , j , k;	
	for(i = c ; i < n ; i++){
		if(m - (p + 1) < 0) break;	
		a[p] = v[i];
		if(p == m - 1)
			pary(a);
		else
			if(p < m - 1)
				ex(v , a , p + 1 , i + 1);	
	}
	return;
}

int main(void){
	int i;
	while(~scanf("%d" , &n)){
		if(n == 0) break;
		int v[n];
		for(i = 0 ; i < n ; i++)
			scanf("%d" , &v[i]);
		qsort(v , n , sizeof(int) , cmp);
		scanf("%d" , &m);
		int a[m];
		ex(v , a , 0 , 0);
		puts("");
	}
	return 0;
}
