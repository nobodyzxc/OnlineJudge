#include<stdio.h>
#include<math.h>
const int wave = 32768;
const int PI = 3;
//M_PI = PI
int Pow(int e , int x){
	int i , acc = 1;
	if(x == 0) return 1;
	for(i = 0 ; i < x ; i++){
		acc *= e;
	}
	return acc;
}
double aprx(double a , int p){
	int tem = (int)(a * Pow(10 , p+1));
	if(tem % 10 >= 5){
		return ((double)(tem / 10)) / (double)Pow(10 , p) + 1 / (double)Pow(10 , p);
	}
	else{
		return ((double)(tem / 10)) / (double)Pow(10 , p);
	}
}
int main(void){
	double F , T , R , N ,  i , acc_sin;
	R = 8000;
	while(~scanf("%lf %lf" , &F , &T)){
		N = R * T;
		printf("%.0lf %.0lf\n" , R , N);
		for(i = 0 ; i < N ; i++){
			acc_sin =  sin(1 * F * i * M_PI * 2 / 8000);
			printf("%.3lf " , aprx(acc_sin , 5) * wave);
		}
	}
	return 0;
}

