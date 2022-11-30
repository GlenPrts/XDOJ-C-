#include <stdio.h>

int main()
{
    int m[10][10];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            m[i][j] = 1;
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            m[i][j] = m[i - 1][j - 1] + m[i - 1][j];
        }
            
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", m[i][j]);
        }
        puts("");
    }
    
    

}