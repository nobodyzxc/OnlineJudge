#include<iostream>
#include<algorithm>
#define mx 105
#define scWidth 60
using namespace std;

int n;
string fn[mx];

void print(string fnm , int rpt , char stuff){
    cout << fnm;
    for(int i = 0 ; i < rpt - int(fnm.length()); i++)
        cout << stuff;
}

int main(void){
    while(cin >> n){
        int M = 0;
        for(int i = 0 ; i < n ; i++)
            cin >> fn[i] , M = max(M , int(fn[i].length()));
        sort(fn , fn + n);
        int col = (scWidth - M) / (M + 2) + 1 , row = (n - 1) / col + 1;
        print("" , scWidth , '-') , cout << endl;
        for(int r = 0 ; r < row ; r++ , cout << endl)
            for(int c = 0 ; c < col ; c++){
                int idx = c * row + r;
                if(idx < n) print(fn[idx] ,
                        (c == col - 1 || idx + row >= n)? M : M + 2 , ' ');
            }
    }

    return 0;
}
