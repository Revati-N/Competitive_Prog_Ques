#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for(int i = 0; s[i] != '\0'; i++)
    {
    if(s[i] == ' ')
    {
        s[i] = '\n';
    }
    printf("%c",s[i]);
    }
    return 0;
}
