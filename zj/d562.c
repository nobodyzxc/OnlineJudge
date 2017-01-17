#include<stdio.h>
int main(void){
	int i , n , head , tail , T = 0;
	while(~scanf("%d" , &n)){
		if(T) puts("");
		else T = 1;
		int s[n];
		head = 0 , tail = n - 1;
		for(i = 0 ; i < n ; i++)
			scanf("%d" , &s[i]);
		while(1){
			for(i = head ; i <= tail ; i++)
				i == head ? printf("%d" , s[i]) : printf(" %d" , s[i]);
			puts("");
			if(head == tail) break;
			else head++;
			for(i = tail ; i >= head ; i--)
				i == tail ? printf("%d" , s[i]) : printf(" %d" , s[i]);
			puts("");
			if(head == tail) break;
			else tail--;
		}
	}
	return 0;
}
