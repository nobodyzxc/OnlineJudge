#include<stdio.h>
int main(void){
	double in;
	while(~scanf("%lf" , &in)){
		printf("|%.4lf|=%.4lf\n" , in , (~((in > 0) * -2))*in);
	}
	return 0;
}

