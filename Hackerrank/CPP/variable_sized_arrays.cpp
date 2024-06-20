#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int row, q;
    cin >> row >> q;
    vector<vector<int>> v;
    v.resize(row);

    for(auto& i: v) {
        int col;
        cin >> col;
        i.resize(col);
        for(auto& j: i) {
            int data;
            cin >> data;
            j = data;
        }
    }

    int first, second;
    for (int i = 0; i < q; i++) {
        cin >> first >> second;
        cout << v[first][second] << endl;
    }

return 0;
}
