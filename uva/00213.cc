#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<map>
#include<utility>
using namespace std;
int readInt(){
    int ch , rtn = 0;
    for(int i = 0 ; i < 3 ; i++){
        while((ch = getchar()) == '\n');
        rtn <<= 1 , rtn += ch - '0';
    }
    return rtn;
}

int readCode(int len){
    int rtn = 0 , ch;
    for(int i = 0 ; i < len ; i++){
        while((ch = getchar()) == '\n');
        rtn *= 2 , rtn += (ch - '0');
    }
    if(rtn == (1 << len) - 1) return -1;//when read 11..1
    return rtn;
}

int main(void){
    char header[300];
    while(fgets(header , sizeof(header) , stdin)){
        map<pair<int , int> , char> table;
        int codeLen = 1 , col = 0;
        for(int i = 0 ; i < (int)strlen(header) - 1 ; i++){
            table[make_pair(codeLen , col)] = header[i];
            col++;
            if(col == (1 << codeLen) - 1) col = 0 , codeLen++;
        }
        while((codeLen = readInt())){
            if(codeLen == 0) return 0;
            int code;
            while((code = readCode(codeLen)) >= 0)
                printf("%c" , table[make_pair(codeLen ,code)]);
        }
        fgets(header , sizeof(header) , stdin);
        puts("");
    }
    return 0;
}
