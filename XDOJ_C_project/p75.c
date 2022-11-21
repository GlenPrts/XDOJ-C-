#include <stdio.h>
int main()
{
    int n, m, arr[256][256];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int arrdeep[16], arrdeepnumber[16];
    for (int i = 0; i < 16; i++)
    {
        arrdeep[i] = i;
        arrdeepnumber[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int t = arr[i][j];
            arrdeepnumber[t]++;
        }
    }

    for (int i = 0; i < 16; i++)
    {
        if (arrdeepnumber[i] != 0)
            printf("%d %d\n", arrdeep[i], arrdeepnumber[i]);
    }
}
