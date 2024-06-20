#include <stdio.h>
#include <cmath>
using namespace std;


int main() {
    int a, b, pa, pb;

    scanf("%d %d", &a, &b);

    pa = a+b;
    pb = abs(a-b);

    printf("%d\n%d", pa, pb);

    return 0;
}
