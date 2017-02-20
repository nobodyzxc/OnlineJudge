#include<cstdio>
#include<utility>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
set<pair<int , int> > pane;
vector<pair<int , int> > vecp;
set<int> line;
vector<int> vecl;
int a , b;

int main(){
    while(~scanf("%d%d" , &a , &b)){
        bool pass = true;
        pane.clear() , line.clear() , vecp.clear() , vecl.clear();

        if(a > b) swap(a , b);

        vecp.push_back(make_pair(a , b));
        pane.insert(make_pair(a , b));
        line.insert(a) , line.insert(b);
        vecl.push_back(a) , vecl.push_back(b);

        for(int i = 1 ; i < 6 ; i++){
            scanf("%d%d" , &a , &b);
            if(a > b) swap(a , b);
            vecp.push_back(make_pair(a , b));
            pane.insert(make_pair(a , b));
            line.insert(a) , line.insert(b);
            vecl.push_back(a) , vecl.push_back(b);
        }

        sort(vecp.begin() , vecp.end());

        //check opposide
        for(int i = 0 ; i < 3 ; i++)
            pass &= vecp[i*2] == vecp[i*2 + 1];
        pass &= pane.size() <= 3;

        //avoid \( ([a-c]) , \1 \)*2
        set<int>::iterator lenA , lenB;
        for(lenA = line.begin() ;
                lenA != line.end() ; lenA++){
            for(lenB = lenA , lenB++ ;
                    lenB != line.end() ; lenB++){
                if(pane.find(make_pair(*lenA , *lenB)) == pane.end())
                    pass = false;
            }
        }

        //if exist (lenA , lenA) ,
        //the other two type should contain at least one (lenA)
        for(lenA = line.begin() ;
                lenA != line.end() ; lenA++){
            int sideTypeCount =
                count(vecl.begin() , vecl.end() , *lenA);
            pass &= (sideTypeCount % 4 == 0);
        }

        puts(pass ? "POSSIBLE" : "IMPOSSIBLE");
    }
    return 0;
}
