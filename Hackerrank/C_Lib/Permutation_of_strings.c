#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
    for (int i=n-2; i>=0; i--)
    {
        if (strcmp(s[i], s[i+1]) < 0)
        {
            for (int j=n-1; j>i; j--)
            {
                if (strcmp(s[j], s[i]) > 0)
                {
                    char *temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;

                    for (int t=i+1, k=n-1; t<k; t++, k--)
                    {
                        char *temp = s[t];
                        s[t] = s[k];
                        s[k] = temp;
                    }

                    return 1;
                }
            }
        }
    }

    return 0;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
