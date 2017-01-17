#include<stdio.h>
#include<stdlib.h>
#define MIN(x , y) (x > y ? y : x)
int M[13] = {0 , 31 , 0 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};

int isLeap(int y){
    return y % 4 ? 0 : (y % 100 ? 1 : (y % 400 ? 0 : 1));
}

int getMsD(int y , int m){
    return m != 2 ? M[m] : (isLeap(y) ? 29 : 28);
}

int getSum(int des , int y , int m , int d){
    int acc = 0;
    acc += d;
    for(int i = 1 ; i < m ; i++)
        acc += getMsD(y , i);
    for(int i = des ; i < y ; i++)
        acc += isLeap(i) ? 366 : 365;
    return acc;
}
int main(void){
    int y , m , d , yy , mm , dd;
    while(~scanf("%d %d %d %d %d %d" , &y , &m , &d , &yy , &mm , &dd)){
       printf("%d\n" , abs(getSum(MIN(y , yy) , y , m , d) - 
              getSum(MIN(y , yy) , yy , mm , dd)));
    }
    return 0;
}
