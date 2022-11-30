#include <stdio.h>
int main()
{
    int a[2][3], b[3][2], c[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j] = 0;
            for (int p = 0; p < 3; p++)
            {
                c[i][j] += a[i][p] * b[p][j];
            }
            printf("%d ", c[i][j]);
        }
        puts("");
    }
    
    
    
}