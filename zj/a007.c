#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define ll unsigned long long int
bool tb[2147483648];
int curSize = 0;
struct _list{
	ll idx;
	unsigned long long int prime;
	struct _list *nxt;
};
struct _list *head = NULL;
struct _list *tail = NULL;
struct _list *tmp;
ll idx = 1;
int is_prim(ll num){
	int i;
	ll sq = sqrtl(num);
	for(tmp = head ; tmp ; tmp = tmp->nxt){
		if(num % tmp->prime == 0)
			return 0;
		if(tmp->prime > sq)
			break;
	}
	return 1;
}
int main(void){
    memset(tb , 0 , sizeof(tb));
    while(~scanf("%d" , &n)){
        is_prim ? puts("Yes") : puts("No");
    }
	return 0;
}
