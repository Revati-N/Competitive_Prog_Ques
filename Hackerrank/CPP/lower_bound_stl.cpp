#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, n1;
    vector<int> vec;  
    cin >> n;
    
    for (int i=0; i<n; i++)
    {
        cin >> n1;
        vec.push_back(n1);
    }
    
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> n1;
        auto result = lower_bound(vec.begin(), vec.end(), n1);
        cout << (*result==n1 ? "Yes ":"No ") <<(result-vec.begin() + 1) << endl;
    }
    return 0;
}
