#include <stdio.h>

int f(int x, int p[])
{
    int t = 1;
    for (int i = 0; i < 50; i++)
    {
        if (p[i] == x)
            t = 0;
    }
    return t;
}

int main()
{
    int n, m, t, k, arr[22][22];
    scanf("%d %d %d %d", &n, &m, &t, &k);



    for (int i = 0; i < 22; i++)
    {
        for (int j = 0; j < 22; j++)
        {
            arr[i][j] = 0;
        }
    }



    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }


    int flag = 0, p[50];


    for (int i = 0; i < 50; i++)
    {
        p[i] = 0;
    }



    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i][j] == k)
            {
                if (arr[i + 1][j] != k && f(arr[i + 1][j],p))
                {
                    p[flag] = arr[i + 1][j];
                    flag++;
                }
                if (arr[i - 1][j] != k && f(arr[i - 1][j],p))
                {
                    p[flag] = arr[i - 1][j];
                    flag++;
                }
                if (arr[i][j + 1] != k && f(arr[i][j + 1],p))
                {
                    p[flag] = arr[i][j + 1];
                    flag++;
                }
                if (arr[i][j - 1] != k && f(arr[i][j - 1],p))
                {
                    p[flag] = arr[i][j - 1];
                    flag++;
                }
            }
        }
    }

    printf("%d", flag);

}