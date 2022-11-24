#include <stdio.h>
#include <string.h>

int main()
{
    int n, m, arr[100][100], arr1[100][100];
    memset(arr, 0, sizeof(arr));
    memset(arr1, 0, sizeof(arr1));
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            scanf("%d", &arr[i][k]);
        }
    }

    int row = 0, col = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int k = 0; k < m; k++)
        {
            arr1[row][col] = arr[i][k];
            row++;
            if(row == m)
            {
                row = 0;
                col++;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int k = 0; k < n; k++)
        {
            printf("%d ", arr1[i][k]);
        }
        puts("");
    }
}