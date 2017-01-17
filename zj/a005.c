#include<stdio.h>
#include<math.h>
int main(void){
    int kase , s[4] , i , c;
    scanf("%d" , &kase);
    for(c = 0 ; c < kase ; c++){
        for(i = 0 ; i < 4 ; i++)
            scanf("%d" , &s[i]); 
        if(s[0] + s[2] == 2 * s[1])
            for(i = 0 ; i < 5 ; i++)
                printf("%s%d" , i ? " " : "" , s[0] + i * (s[1] - s[0]));
        else
            for(i = 0 ; i < 5 ; i++)
                printf("%s%d" , i ? " " : "" , 
                        s[0] * (int)pow((s[1] / s[0]) , i));
        puts("");
    }
    return 0;
}
