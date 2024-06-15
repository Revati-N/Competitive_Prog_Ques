#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, arr[1000];
    scanf("%d", &num);
    int i, j;
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(j = num - 1; j >= 0; j--)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
    return 0;
}
