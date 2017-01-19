#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char ans[1024] , DNA[1024] , gene[] = "ACGT";
int m , n , sum[1024][4];

int rtnIdx(char c){
    return find(gene , gene + 4 , c) - gene;
}

int main(void){
    int kase;
    scanf("%d" , &kase);
    while(kase--){
        memset(sum , 0 , sizeof(sum));
        scanf("%d%d\n" , &m , &n);
        for(int i = 0 ; i < m ; i++){
            scanf("%s" , DNA);
            for(int j = 0 ; j < n ; j++)
                sum[j][rtnIdx(DNA[j])]++;
        }
        int diff = 0;
        for(int i = 0 ; i < n ; i++){
            int mx = 0;
            for(int j = 1 ; j < 4 ; j++)
                if(sum[i][j] > sum[i][mx]) mx = j;
            ans[i] = gene[mx] , diff += (m - sum[i][mx]);
        }
        ans[n] = 0; //or wa
        printf("%s\n%d\n" , ans , diff);
    }
    return 0;
}
