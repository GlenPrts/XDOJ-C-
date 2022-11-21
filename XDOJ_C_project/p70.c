#include <stdio.h>

int main()
{
    int n, arr[100][100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            scanf("%d", &arr[i][k]);
        }
    }

    int y, x, t = 0, r[10000];
    for (int i = 0; i < n * 2; i++)
    {
        if (i & 1)
        {
            for (x = n - 1; x >= 0; x--)
            {
                y = x - i;
                y = -y;
                if (y < n && y >=0)
                {
                    r[t] = arr[y][x];
                    t++;
                }
                
            }
        }else
        {
            for (x = 0; x < n; x++)
            {
                y = x - i;
                y = -y;
                if (y < n && y >= 0)
                {
                    r[t] = arr[y][x];
                    t++;
                }
            }
        }
    }

    for (int i = 0; i < n * n; i++)
    {
        printf("%d ", r[i]);
    }
}