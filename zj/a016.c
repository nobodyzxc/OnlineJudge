#include<stdio.h>
int main(void){
	int num[9][9];
	char input[30];
	int i,j,total1=0,total2=0,total3=0,wrong=0;
	while(scanf("%d",&num[0][0])!=EOF){
		wrong=0;
		for(i=0;i<=8;i++){
			for(j=0;j<=8;j++){
				if((i==0)&&(j==0)){
						continue;
				}
				scanf("%d",&num[i][j]);
			}
		}
		for(j=0;j<=8;j++){
			total1=0;
			total2=0;
			total3=0;
			for(i=0;i<=8;i++){
				total1=total1+num[i][j];
				total2=total2+num[j][i];
				total3=total3+num[j/3*3+i/3][j/3*3+i%3];
			}
			if(total1!=45||total2!=45||total3!=45){
				wrong=1;
				break;
			}
		}
		if(wrong==1){
			printf("no\n");
			gets(input);
			continue;
		}
			printf("yes\n");
		gets(input);
	}
	return 0;
}
