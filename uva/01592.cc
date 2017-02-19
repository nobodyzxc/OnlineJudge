#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<set>
using namespace std;
int main(void){
    //input data
    int n , m;
    while(cin >> n >> m){
        cin.ignore();
        int encKey = 0;
        vector<vector<int> > db;
        map<string , int> encStr;
        string entry , cell;
        for(int i = 0 ; i < n ; i++){
            getline(cin , entry);
            vector<int> col;
            for(int j = 0 ; j < m ; j++){
                int cellend = entry.find(",");
                if(~cellend){//found
                    cell = entry.substr(0 , cellend); 
                    entry = entry.substr(cellend + 1); 
                }
                else//not found
                    cell = entry.substr(0);
                //cout << j << "(" << cellend << ")" <<  ":" << cell << endl;
                if(!encStr.count(cell)){
                    encStr[cell] = encKey++;
                }
                col.push_back(encStr[cell]);
            }
            db.push_back(col);
        }
        //sol
        bool PNF = true;
        for(int c0 = 0 ; c0 < m && PNF; c0++){
            for(int c1 = c0 + 1 ; c1 < m && PNF; c1++){
                map<pair<int , int> , int>colpr;
                for(int r = 0 ; r < n && PNF ; r++){
                    if(!colpr.count(make_pair(db[r][c0] , db[r][c1])))
                        colpr[make_pair(db[r][c0] , db[r][c1])] = r;
                    else{
                        cout << "NO" << endl;
                        cout << colpr[make_pair(db[r][c0] , db[r][c1])]+1
                            << " " << r+1 << endl;
                        cout << c0+1 << " " << c1+1 << endl;
                        PNF = false;
                    }
                }
            }
        }
        if(PNF) cout << "YES" << endl;
    }
    return 0;
}
