#include <stdio.h>
int main()
{
    char n, m[26] = {};
    int s;
    m[0] = 'A';
    scanf("%c", &n);
    n -= 64;
    for (int i = 1; i < 26; i++)
    {
        m[i] += m[i - 1] + 1;
    }
    s = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (s - 1); j++)
        {
            printf(" ");
        }
        for (int t = 0; t < i; t++)
        {
            printf("%c", m[t]);
        }
        for (int o = i; o > -1; o--)
        {
            printf("%c", m[o]);
        }
        printf("\n");
        s--;
    }
    return 0;
}