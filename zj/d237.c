#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define ll unsigned long long int
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
	ll sq = sqrtl(num);
	if(!head){
		head = (struct _list*)malloc(sizeof(struct _list));
		head->prime = num;
		head->nxt = NULL;
		tail = head;
		return 1;
	}
	for(tmp = head ; tmp ; tmp = tmp->nxt){
		if(num % tmp->prime == 0)
			return 0;
		if(tmp->prime > sq)
			break;
	}
	tail->nxt = (struct _list*)malloc(sizeof(struct _list));
	tail->nxt->prime = num;
	tail->nxt->nxt = NULL;
	tail = tail->nxt;
	return 1;
}
int main(void){
	ll acc = 0 , i;
	for(i = 2 ; i <= 2000000 ; i++){
		if(is_prim(i)){
//			printf("i = %lld\n" , i);
			acc += i;
		}
	}
	printf("%lld\n" , acc);	
	return 0;
}
