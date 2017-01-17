#include<stdio.h>
#include<math.h>
int main(void){
    int a , b , c , s;
    while(~scanf("%d%d%d" , &a , &b , &c)){
        s = b*b - 4*a*c;
        if(s < 0)
            puts("No real root");
        else if(s == 0)
            printf("Two same roots x=%d\n" , -b / (2*a));
        else
            printf("Two different roots x1=%d , x2=%d\n" , 
                    (-b + (int)sqrt(s)) / (2*a) , 
                    (-b - (int)sqrt(s)) / (2*a));
    }
    return 0;
}
