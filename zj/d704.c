#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int ref[47];
int into[47];
int feb(int i){
	if(i == 0) return 0;
	else if(i == 1) return 1;
	else if(i == 2) return 1;
	else{
		if(ref[i] != -1) return ref[i];
		else{
			ref[i] = feb(i - 1) + feb(i - 2);
			return ref[i];
		}
	}
}
int main(void){
	int i , n;
	memset(ref , -1 , sizeof(ref));
	ref[0] = 0 , ref[1] = 1 , ref[2] = 1;
	into[0] = 1 , into[1] = 2;
	for(i = 2 ; i < 44 ; i++){
		into[i] = into[i - 1] * feb(i + 2);
	}
	int con = 0;
	char ans[100] , aa[100];
	while(~scanf("%d" , &n)){
		con = 0;
		for(i = 3 ; i <= 46 ; i++){
			if(n){
				if(con == 0){
					sprintf(ans , "%d" , n % ref[i]);
					n /= ref[i];
					con = 1;
				}
				else{
					strcpy(aa , ans);
					sprintf(ans , "%d,%s" , n % ref[i] , aa);
					n /= ref[i];
				}
			}
		}
		puts(ans);
	}
	return 0;
}

