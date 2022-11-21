#include <stdio.h>
int main ()
{
    int m, n[1000] = {}, s, M;
    scanf("%d", &m);
    M = m * m * m;
    for (int i = 0; i < 1000; i++)
    {
        n[i] = 2 * (i + 1) - 1;
    }
    for (int i = 0; i < 1000 - m; i++)
    {
        s = 0;
        for (int j = 0; j < m; j++)
        {
            s += n[i + j];
        }
        if (s == M)
        {
        for (int l = 0; l < m; l++)
        {
        printf("%d ", n[i + l]);
        }
        break;
        
        } 
    }
    return 0;
}