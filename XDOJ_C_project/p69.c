#include <stdio.h>
int main()
{
    int m, n, arr[100][100];
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        int  start[100]= {-1}, end[100]= {-1}, flag = 0;
        
        for (int j = 0; j < n; j++)
        {   
            if (arr[i][j] == 1)
            {
                start[flag] = j;
                while (arr[i][j] == 1)
                {
                    j++;
                }
                j--;
                end[flag] = j;
                flag++;
            }
        }

        int H[100];
        for (int k = 0; k < flag; k++)
        {
            H[k] = end[k] - start[k];
        }

        int t = 0;
        for (int k = 0; k < flag; k++)
        {
            if (H[t] < H[k])
                t = k;
        }

        printf("%d %d\n", start[t], end[t]);
    }
}