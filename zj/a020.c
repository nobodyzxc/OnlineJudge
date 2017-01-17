#include<stdio.h>
#include<stdlib.h>
int main(void){
	int num[11]={0};
	int i,total;
	char ch;//-55
	while(scanf("%c",&ch)!=EOF){
//		printf("/%c/\n",ch);
		total=0;
		ch-=55;
		if(ch>=10 && ch<=17){
		}
		else if(ch==18){
			ch-=34;
		}
		else if(ch>=19 && ch<=23){
			ch--;
		}
		else if(ch==24){
			ch=35;
		}
		else if(ch>=25 && ch<=31){
			ch-=2;
		}
		else if(ch==33 || ch==34){
			ch-=3;
		}
		else if(ch==35){
			ch=33;
		}
		num[0]=ch/10;
		num[1]=(ch%10)*9;
		for(i=2;i<=10;i++){
			scanf("%1d",&num[i]);
			if(i==10){
				break;
			}
			num[i]=num[i]*(10-i);
		}
		for(i=0;i<=10;i++){
			total+=num[i];
		}
		if(total%10==0){
			printf("real\n");
		}	
		else{
			printf("fake\n");
		}
		ch=getchar();
	}
	return 0;
}
