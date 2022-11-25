#include <stdio.h>
#include <string.h>
int main()
{
    int A[2][3], B[3][2], C[2][2];
    scanf("%d %d %d %d %d %d", &A[0][0], &A[0][1], &A[0][2], &A[1][0], &A[1][1], &A[1][2]);
    scanf("%d %d %d %d %d %d", &B[0][0], &B[0][1], &B[1][0], &B[1][1], &B[2][0], &B[2][1]);
    for (int i = 0; i < 2; i++)
    {    
        for (int j = 0; j < 2; j++)
        {
            int t = 0;
            for (int p = 0; p < 3; p++)
            {
                t += A[i][p] * B[p][j];
            }
            C[i][j] = t;   
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", A[i][j]);
        } 
        puts("");  
    }
    puts("");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", B[i][j]);
        }
        puts("");
    }
    puts("");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d  ", C[i][j]);
        }
        puts("");
    }
    return 0;
    
} 