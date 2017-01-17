#include<stdio.h>
#include<math.h>
int main(void){
	int a,b,c,d;
	int num=0;
	int skip=0;
	double i,j,k;
	while(scanf("%d %d",&a,&b)!=EOF){
		for(i=a;i<=b;i++){
			k=sqrt(i);
			for(j=2;j<=k;j++){
				if(((int)i%(int)j)==0){
					skip=1;
					break;
				}
			}
			if(skip==1){
				skip=0;
				continue;
			}
			num++;
		}
		if(a == 1) num--;
		printf("%d\n",num);
		num=0;
	}
		return 0;
}
