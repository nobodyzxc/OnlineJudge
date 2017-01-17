#include<stdio.h>
#include<stdlib.h>
int main(void){
	float a , b , c , d , e , f;	
	while(~scanf("%f %f %f %f %f %f" , &a , &b , &c , &d , &e , &f)){
		if(d != 0 && e != 0 && f != 0){
			if((a / d) == (b / e)){
				if((b / e) == (c / f)){
					puts("Too many");
				}
				else{
					puts("No answer");
				}
			}
			else{
				printf("x=%.2f\n" , (c * e - b * f) / (a * e - b * d));
				printf("y=%.2f\n" , (a * f - c * d) / (a * e - b * d));
			}
		}
		else{
			if((a * e - b * d) != 0){
				printf("x=%.2f\n" , (c * e - b * f) / (a * e - b * d));
				printf("y=%.2f\n" , (a * f - c * d) / (a * e - b * d));
			}
			else{
				if(a == 0 && b == 0 && c != 0)
					puts("No answer");
				else if(d == 0 && e == 0 && f != 0)
					puts("No answer");
				else if(a == 0 && d == 0){
					if(b * f == e * c)
						puts("Too many");
					else
						puts("No answer");
				}
				else if(b == 0 && e == 0){
					if(a * f == d * c)
						puts("Too many");
					else
						puts("No answer");
				}
				else if(a == 0 && b == 0 && c == 0)
					puts("Too many");
				else if(d == 0 && e == 0 && f == 0)
					puts("Too many");
				else if(c == 0 && f == 0){
					if(a * e == b * d)
						puts("Too many");
					else
						puts("No answer");
				}
				else{
					puts("No answer");
				}
			}
		}
	}
	return 0;
}

