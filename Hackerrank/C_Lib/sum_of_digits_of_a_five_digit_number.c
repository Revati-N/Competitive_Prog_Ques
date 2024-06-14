#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,sum=0;
    scanf("%d", &n);

    while(n > 0) {
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }

    printf("%d\n", sum);

return 0;
    return 0;
}
