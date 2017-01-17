#include<stdio.h>
#include<math.h>
int main(void){
	int i;
	char a[7];
	while(~scanf("%s",a)){
	for(i=0;i<=5;i++){
		printf("%d",abs(a[i]-a[i+1]));
	}
	puts("");
	}
	return 0;
}
