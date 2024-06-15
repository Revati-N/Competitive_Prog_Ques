#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_output( int start, int end)
{
    const char *array[]=
    {"one","two","three","four","five","six","seven","eight","nine"};
    for(int i =start; i <=end; i++){
        if(i>=1 && i <=9) printf(array[i-1]);
        else if (i>9){
            if(i%2 ==0) printf("even");
            else printf("odd");
        }
        printf("\n");
    }
}

int main(){
    int a, b;
    scanf("%d\n%d", &a, &b);
    print_output(a,b);
    return 0;
}
