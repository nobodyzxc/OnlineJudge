#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    set<string> all;
    string a;
    while(getline(cin , a))
        cout << (all.count(a) ? "YES" : "NO") << endl , all.insert(a);
    return 0;
}
