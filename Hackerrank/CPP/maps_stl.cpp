#include <bits/stdc++.h>
using namespace std;

map<string, int> m;

void add(pair<string, int> p) {
    m[p.first] += p.second;
}

void remove(pair<string, int> p) {
    m.erase(p.first);
}

void display(pair<string, int> p) {
    cout<<m[p.first]<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int y;
        pair<string, int> p;
        cin>>y;
        switch (y) {
            case 1: cin>>p.first>>p.second; add(p); break;
            case 2: cin>>p.first; p.second = 0; remove(p); break;
            case 3: cin>>p.first; p.second = 0; display(p); break;
            default: break;
        }
    }
    return 0;
}

