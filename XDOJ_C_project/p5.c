#include <stdio.h>
int main()
{
    int n, m, k[32][32], s[32][32];
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &k[i][j]);
            s[i][j] = k[i][j];
        }        
    }
    //行检测
    for (int number = 1; number < 10; number++)
    {
        int row, i;
        for ( row = 1; row <= n; row++)
        {
            for (i = 1; i <= m; i++)
            {
                if (number == k[row][i])
                {
                    if (number == k[row][i + 1])
                    {
                        if (number == k[row][i - 1])
                        {
                            s[row][i] = 0;
                            s[row][i + 1] = 0;
                            s[row][i - 1] = 0;
                        }                       
                    }                    
                }                
            }        
        }
    }
    

    //列检测
    for (int number = 1; number < 10; number++)
    {
        int row, i;
        for ( i = 1; i <= m; i++)
        {
            for (row = 1; row <= n; row++)
            {
                if (number == k[row][i])
                {
                    if (number == k[row + 1][i ])
                    {
                        if (number == k[row - 1][i])
                        {
                            s[row + 1][i] = 0;
                            s[row - 1][i] = 0;
                            s[row][i] = 0;
                        }   
                    }
                }   
            }   
        }
    }
   

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }

}

