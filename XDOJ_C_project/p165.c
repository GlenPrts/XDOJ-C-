#include <stdio.h>
int main()
{
    int N, max, col, A[80];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    max = A[0];
    for (int i = 0; i < N; i++)
    {
        if (max < A[i])
        {
            max = A[i];
            col = i;
        }
        
    }
    printf("%d %d %d", N, max, col);
}