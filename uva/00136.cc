#include<cstdio>
#include<queue>
#include<set>
#define ll long long
using namespace std;
int main(void){
    int n[3] = {2 , 3 , 5};
    priority_queue<ll , vector<ll> , greater<ll> > ugly;
    set<ll> uglySet;
    ugly.push(1) , uglySet.insert(1);
    for(int it = 1 ; it < 1500 ; it++){
        for(int i = 0 ; i < 3 ; i++)
            if(!uglySet.count(ugly.top() * n[i]))
                uglySet.insert(ugly.top() * n[i]) ,
                ugly.push(ugly.top() * n[i]);
        ugly.pop();
    }
    printf("The 1500'th ugly number is %lld.\n" , ugly.top());

}
