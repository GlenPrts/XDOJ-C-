#include <stdio.h>
#include <string.h>
int main()
{
    char arr[102][102];
    int n, x, x1, y, y1;
    scanf("%d", &n);
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &x, &y, &x1, &y1);
        if (x > x1)
        {
            int t = 0;
            t = x;
            x = x1;
            x1 = t;
        }

        if (y > y1)
        {
            int t = 0;
            t = y;
            y = y1;
            y1 = t;
        }

        for (int row = y; row < y1; row++)
        {
            for (int col = x; col < x1; col++)
            {
                arr[row][col] = 1;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < 102; i++)
    {
        for (int k = 0; k < 102; k++)
        {
            if (arr[i][k] != 0)
            {
                sum++;
            }
        }
    }
    printf("%d", sum);
}