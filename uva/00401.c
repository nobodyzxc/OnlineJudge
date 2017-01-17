#include<stdio.h>
#include<string.h>
const char ans[4][30] = { 
    " -- is not a palindrome." , 
    " -- is a regular palindrome." , 
    " -- is a mirrored string." , 
    " -- is a mirrored palindrome."
};

char getMir(char c){
    const char en[] = "A   3  HIL JM O   2TUVWXY5" , 
               nm[] = "01SE z  8 ";
    if(c >= 'A' && c <= 'Z')
        return en[c - 'A'];
    else 
        return nm[c - '0'];
}

int main(void){
    char input[11111];
    while(~scanf("%s" , input)){
        int len = strlen(input) , r = 1 , m = 1;
        for(int i = 0 ; i < (len + 1) / 2 && (r || m) ; i++){
            if(input[i] != input[len - 1 - i])
                r = 0;
            if(input[i] != getMir(input[len - 1 - i]))
                m = 0;
        } 
        printf("%s%s\n\n" , input , ans[r + m*2]);
    } 
    return 0;
}
