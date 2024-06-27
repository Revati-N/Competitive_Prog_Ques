#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> v;
    for(int i = 0; i<N; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }   
    sort(v.begin(), v.end());
    for(int a:v){
        cout << a << " ";
    }
    return 0;
}
