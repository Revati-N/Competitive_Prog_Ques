#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i,j;
    float m,n;

    scanf("%d %d",&i, &j);
    scanf("%f %f",&m, &n);

    printf("%d %d\n", i+j, i-j);
    printf("%0.1f %0.1f", m+n, m-n);

    return 0;
}
