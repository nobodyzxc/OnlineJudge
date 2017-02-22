#include<cstdio>
#include<queue>
using namespace std;
int main(void){
    int n;
    while(~scanf("%d" , &n) && n){
        queue<int> deck;
        for(int i = 0 ; i < n ; i++)
            deck.push(i + 1);
        printf("Discarded cards:");
        int f = 1;
        while(deck.size() >= 2){
            if(f) f = 0;
            else printf(",");
            printf(" %d" , deck.front());
            deck.pop();
            deck.push(deck.front());
            deck.pop();
        }
        printf("\nRemaining card: %d\n" , deck.front());
    }
    return 0;
}
