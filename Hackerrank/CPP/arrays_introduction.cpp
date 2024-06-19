#include <iostream>
using namespace std;

int main() {
    int arr[1000], i, x, j;
    cin >> x;

    for (i = 0; i < x; i++) {
        cin >> arr[i];
    }

    for (j = x - 1; j >= 0; j--) {
        cout << arr[j] << " ";  // Added space for better output formatting
    }
    return 0;
}
