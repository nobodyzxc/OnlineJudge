#include<cstdio>
#include<cstdlib>
#include<cstring>
int main(){
    char str[100002];
    int curY , swp , i , len;
    while(~scanf("%s" , str))
        for(i = 0 , swp = 0 , curY = 0 , len = strlen(str); i < len ; i++ , i - len ? 1:printf("%d\n" , swp))
            if(str[i] == 'y')
                swp += abs(curY * 3 - i) , curY++;
    return 0;
}
