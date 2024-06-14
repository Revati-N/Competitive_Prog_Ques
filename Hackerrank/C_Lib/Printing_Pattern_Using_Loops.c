#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);   

    int vertice=n-1;
    
    for(int y=vertice ; y>=-vertice ; y-- )
    {             
    for(int x=-vertice, p=n ; x<=vertice  ; x++ ) 
    {  
        printf("%d ",p);    

        if(y>0 ? -x>y : -x>-y)    p--;

        if(y>0 ? x>=y : x>=-y)    p++;
    }

    printf("\n");
}

return 0;
}
