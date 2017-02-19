#include<vector>
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int p , pc , left , kase = 1 , cd[20];
    while(~scanf("%d%d" , &p , &left)){
        pc = p;
        vector<int> line;
        for(int i = 0 ; i < p ; i++)
            line.push_back(1);
        for(int i = 0 ; i < 20 ; i++)
            scanf("%d" , &cd[i]);

        for(int i = 0 , cur = 0 ; i < 20 && p > left ; i++){//per card
            while(cur < p && pc > left){
                for(int j = 0 ; j < cd[i] - 1 && cur < p; j++){
                    cur++; while(!line[cur] && cur < p) cur++; //next person
                }
                if(cur < p) line[cur] = 0 , pc--;
                cur++; while(!line[cur] && cur < p) cur++; //next person
            }
        }
        printf("Selection #%d\n" , kase++);
        for(int i = 0 , f = 0 ; i < (int)line.size() ; i++)
            if(line[i]) printf("%s%d" , f ? " " : "" , i + 1) , f = 1;
        puts("\n");
    }

    return 0;
}
