#include<stdio.h>
int main(void){
	int len;
	while(~scanf("%d" , &len)){
		int mm[len] , i , j , max = 0 , cur = 0;
		max = 0 , cur = 0;
		for(i = 0 ; i < len ; i++)
			scanf("%d" , &mm[i]);
		for(i = 0 ; i < len ; i++){
			cur = 0;
			for(j = i ; j < len ; j++){
				cur += mm[j];
				if(max < cur)
					max = cur;	
			}
		}
		printf("%d\n" , max);
	}	
	return 0;
}

