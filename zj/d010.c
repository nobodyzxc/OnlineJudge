#include<stdio.h>
#include<math.h>
int main(void){
	int num , i , j , acc , h;
	while(~scanf("%d" , &num)){
		h = (int) sqrt(num);
		acc = 1;
		for(i = 2 ; i <= h ; i++)
			if(!(num % i))
			   	acc = acc + i + (num / i);
		if(num == h * h)
			acc -= h;
		if(acc > num) puts("盈數");
		else if(acc == num) puts("完全數");
		else puts("虧數");
	}
	return 0;
}
