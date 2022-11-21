#include <stdio.h>
int main()
{
    int m, n, arr[100][100];
    scanf("%d %d", &m, &n);
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            scanf("%d", &arr[row][col]);
        }
    }
    int row, col, arrflag = 0;
    for (int i = 0; i < m; i++)
    {
        //寻找colmax
        int colmax = arr[0][i];
        for (int k = 0; k < m; k++)
        {
            if (colmax < arr[k][i])
            {
                colmax = arr[k][i];
                row = k;
                col = i;
            }
        }
        //寻找rowmin
        int rowmin = arr[row][0];
        for (int k = 0; k < n; k++)
        {
            if (rowmin > arr[row][k])
                rowmin = arr[row][k];
        }

        if (rowmin == colmax)
        {
            arrflag = 1;
            break;
        }
        
    }

    if (arrflag)
        printf("%d %d %d", row, col, arr[row][col]);
    else
        printf("no");
    printf("\n");
}