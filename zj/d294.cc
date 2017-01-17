#include<cstdio>
#include<iostream>
#define ll long long
using namespace std;
ll C(ll a){
    if(a <= 0) return 0;
    return a * (a + 1) / 2; 
}

int main(){
    ll a , b;
    while(cin >> a >> b)
        cout << C(a) * C(b) << endl;
    return 0;
}
