#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
int numlen(int al[]);
void plus(void);
int minus(void);
void mutiply(void);
void divise(void);
void stvnum(int num[]);
void rm0(int num[]);
void rm1(int num[]);
int num1[501]={-1};
int num2[501]={-1};
char non[501]={0};

int main(void){
int ch;
char op;	
int i=0;
int j;
while(1){
//	ch=getchar();
	i=0;
	memset(num1,-1,sizeof(num1));
	memset(num2,-1,sizeof(num1));
//	for(i=0;i<=500;i++){
//		printf("%d",num1[i]);
//	}
//	puts("----");
//exit(0);
//	printf("hello");
//exit(0);
	while((ch=getchar())!=' '){
		if(ch==EOF){
			exit(0);
		}
		ch-=48;
		num1[i]=ch;
//		printf("%d",num1[i]);
		i++;
//		if(i==10){
//			break;
//		}
	}
//	exit(0);
//	puts("  ");
//	puts("----");
//	for(j=0;j<=50;j++){
//		printf("%d",num2[j]);
//	}
//	puts("  ");
//	puts("----");
	op=getchar();
//	putchar(op);
	ch=getchar();
//	puts("----");
//	for(j=0;j<=50;j++){
//		printf("%d ",num1[j]);
//	}
//	puts("");
//	puts("----");
//	exit(0);
	i=0;
	while(!(((ch=getchar())=='\n')||(ch==EOF))){
//		printf("%c\n",ch);
		ch-=48;
		num2[i]=ch;
//		printf("num2[%d]=%d\n",i,num2[i]);
		i++;
	}
//	puts("----");
//	puts("  ");
//	for(j=0;j<=50;j++){
//		printf("%d ",num2[j]);
//	}
//	puts("");
//	puts("----");
//	exit(0);


	if(op=='+'){
		plus();
//		puts("plus");
//		exit(0);
	}
	else if(op=='-'){
		minus();
	}
	else if(op=='*'){
		mutiply();
	}
	else if(op=='/'){
		divise();
	}
	i=0;
	while(num1[i]!=-1){
		printf("%d",num1[i]);
		i++;
	}
	puts("");
//	if(ch==10){
//		exit(0);
//	}
//	printf("ch=%d\n",ch);
//	printf("1");
}
	return 0;
}
void plus(void){
	int ans[501]={0};
	int len,i;
	if(numlen(num1)>=numlen(num2)){
		len=numlen(num1);
	}
	else{
		len=numlen(num2);
	}
//	exit(0);
	stvnum(num1);
	stvnum(num2);
	rm1(num1);
	rm1(num2);
	for(i=0;i<len;i++){
		ans[i]=num1[i]+num2[i];
	}
	for(i=0;i<=499;i++){
		ans[i+1]+=ans[i]/10;
		ans[i]=ans[i]%10;
	}

	rm0(ans);
	stvnum(ans);
//	exit(0);
	for(i=0;i<=500;i++){
		num1[i]=ans[i];
	}
	return;
}
int minus(void){
	int ans[501]={0};
	int len,i;
	int plus;
	
	plus=1;
	if(numlen(num1)>=numlen(num2)){
		len=numlen(num1);
	}
	else if(numlen(num1)<numlen(num2)){
		printf("-");
		plus=0;
		len=numlen(num2);
	}
	else{
		len=numlen(num1);
		for(i=0;i<=500;i++){
			if(num1[i]>num2[i]){
				break;
			}
			else if(num1[i]<num2[i]){
				printf("-");
				plus=0;
				len=numlen(num2);
				break;
			}
		}
	}
//	for(i=0;i<=10;i++){
//		printf("%d",num1[i]);
//	}
//	puts("--num1 ");
//	for(i=0;i<=10;i++){
//		printf("%d",num2[i]);
//	}
//	puts("--num2 ");

	stvnum(num1);
	stvnum(num2);
//	for(i=0;i<=10;i++){
//		printf("%d",num1[i]);
//	}
//	puts("--num1 ");
//	for(i=0;i<=10;i++){
//		printf("%d",num2[i]);
//	}
//	puts("--num2 ");

	rm1(num1);
	rm1(num2);
//	for(i=0;i<=10;i++){
//		printf("%d",num1[i]);
//	}
//	puts("--num1 ");
//	for(i=0;i<=10;i++){
//		printf("%d",num2[i]);
//	}
//	puts("--num2 ");

	for(i=0;i<len;i++){
		if(plus==1){
			ans[i]=num1[i]-num2[i]+ans[i];
		}
		else{
			ans[i]=num2[i]-num1[i]+ans[i];
		}
		if(ans[i]<0){
			ans[i]+=10;
			ans[i+1]-=1;
		}
	}

//	for(i=0;i<=499;i++){

//		ans[i+1]+=ans[i]/10;
//		ans[i]=ans[i]%10;
//	}
	rm0(ans);
	stvnum(ans);
//	exit(0);
	for(i=0;i<=500;i++){
		num1[i]=ans[i];
	}

	return 0;
}
void divise(void){

	return;
}
void mutiply(void){
	int ans[501]={0};
	int i,j;
	stvnum(num1);

	stvnum(num2);
	for(i=0;i<numlen(num2);i++){
		for(j=0;j<numlen(num1);j++){
			ans[j+i]+=num2[i]*num1[j];
		}
	}
	for(i=0;i<=499;i++){
		ans[i+1]+=ans[i]/10;
		ans[i]=ans[i]%10;
	}
	rm0(ans);
	stvnum(ans);
	for(i=0;i<=500;i++){
		num1[i]=ans[i];
	}
	return;
}
void stvnum(int *av){
	int i;
	int len;
	int r;	
	len=numlen(av);
	for(i=1;i<=len/2;i++){
		r=av[i-1];
		av[i-1]=av[len-i];
		av[len-i]=r;
	}		
	return;
}
int numlen(int al[]){
	int i=0;
	while(al[i]!=-1){
		i++;
	}
	return i;
}
void rm0(int num[]){
	int i;
	for(i=500;i>=1;i--){
		if(num[i]==0){
			num[i]=-1;
		}
		else{
//			printf("break; whe i=%d\n",i);
			break;
		}
	}
	return;
}
void rm1(int num[]){
	int i;
//	for(i=0;i<=500;i++){
//		printf("%d",num[i]);
//	}
//	puts("");
	for(i=500;i>=1;i--){
		if(num[i]==-1){
			num[i]=0;
		}
		else{
//			printf("break when i=%d\n",i);
			break;
		}
	}
	return;
}
