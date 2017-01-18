#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
#define abbrev(x , y)   case x:\
                            return aton[y];\
                            break

enum { C , H , O , N };
double aton[] = { 12.01 , 1.008 , 16.00 , 14.01 } , cn = 0;
double getAton(char c){
    switch(c){
        abbrev('C' , C);
        abbrev('H' , H);
        abbrev('O' , O);
        abbrev('N' , N);
    }
    return -1.0;
}

double parse(char str[] , int *i){
    double rtn = 0;
    (*i)++;
    while(str[(*i)] < 65 && str[(*i)] != 0)
       rtn *= 10 , rtn += (double)(str[*i] - '0') , (*i)++;
    (*i)--; 
    return rtn ? rtn : 1.0;
}

int main(void){
    int kase;
    scanf("%d" ,&kase);
    while(kase--){
        char formula[111];
        double sum = 0;
        scanf("%s" , formula);
        for(int i = 0 , len = strlen(formula) ; i < len ; i++)
            sum += getAton(formula[i]) * parse(formula , &i);
        printf("%.3lf\n" , sum);
    }
    return 0;
}
