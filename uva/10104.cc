#include<cstdio>
#include<algorithm>
#define ll long long
using namespace std;
int main(void){
    ll a , b;
    while(~scanf("%lld%lld" , &a , &b)){
        int s = 0 , O = 0 , I = 1 , Z = 2;
        if(a < b) swap(a , b) , s = 1;
        if(!b || a%b == 0 ){
            printf("%s %lld\n" , !s ? "0 1" : "1 0" , b ? b : a);
        }
        else{
            ll ab[3][2] = {
                { a , b } ,
                { b , a % b } ,
                { 0 , 0 }
            };
            ll fr = -(ab[1][0] / ab[1][1]) , fd = -(a / b);
            ll r[3][2] = {
                { 1  ,  fd          } ,
                { fr ,  fd * fr + 1 } ,
                { 0  ,  0           }
            };
            while(ab[I][0] % ab[I][1]){
                //calc
                ab[Z][0] = ab[I][1];
                ab[Z][1] = ab[I][0] % ab[I][1];
                ll f = -(ab[Z][0] / ab[Z][1]);
                for(int i = 0 ; i < 2 ; i++)
                    r[Z][i] = r[O][i] + r[I][i] * f;
                //update
                O = (O+1) % 3; I = (I+1) % 3; Z = (Z+1) % 3;
            }
            if(!s) swap(r[O][1] , r[O][0]);
            printf("%lld %lld %lld\n" , r[O][1] , r[O][0] , ab[I][1]);
        }
    }
}
