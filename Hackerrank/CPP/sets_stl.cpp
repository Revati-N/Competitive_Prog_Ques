#include <bits/stdc++.h>
using namespace std;


int main() {
    int q;
    set<int> s;
    cin >> q;
    for(int i =0; i< q; ++i){
        int x, y;
        cin >> y >> x;
        if( y == 1){
            s.insert(x);
        }
        else if (y == 2){
            s.erase(x);
        }
        else if (y == 3){
            auto it = s.find(x);
            if (it != s.end()){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    
}



