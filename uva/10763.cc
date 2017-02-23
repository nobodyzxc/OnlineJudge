#include<iostream>
#include<map>
#include<utility>
using namespace std;
int main(void){
    int n;
    while(cin >> n && n){
        map<pair<int , int> , int> grp;
        for(int i = 0 ; i < n ; i++){
            int a , b;
            cin >> a >> b;
            if(grp.count(make_pair(b , a)))
                grp[make_pair(b , a)] -= 1;
            else if(grp.count(make_pair(a , b)))
                grp[make_pair(a , b)]++;
            else
                grp[make_pair(a , b)] = 1;
        }
        map<pair<int , int> , int>::iterator it;
        for(it = grp.begin(); it != grp.end() ; it++)
            if(it->second != 0) break;
        cout << (it != grp.end() ? "NO" : "YES") << endl;
    }
    return 0;
}
