#include <stdio.h>
int main()
{
    int k[22][22], s[42], m;
    scanf("%d", &m);
    for (int row = 1; row <= m; row++)
    {
        for (int i = 1; i <= m; i++)
        {
            scanf("%d", &k[row][i]);
        }
    }
    //行元素之和
    for (int row = 1; row <= m; row++)
    {
        int sumrow = 0;
        for (int i = 1; i <= m; i++)
        {
            sumrow += k[row][i];
        }
        s[row - 1] = sumrow;
    }
    //列元素之和
    for (int i = 1; i <= m; i++)
    {
        int sumi = 0;
        for (int row = 1; row <= m; row++)
        {
            sumi += k[row][i];
        }
        s[m + i - 1] = sumi;
    }
    //主对角线之和
    s[2 * m] = 0;
    for (int row = 1, i = 1; row <= m && i <= m; row++, i++)
    {
        s[2 * m] += k[row][i];
    }
    //辅对角线之和
    s[2 * m + 1] = 0;
    for (int row = m, i = 1; row >= 0 && i <= m; row--, i++)
    {
        s[2 * m + 1] += k[row][i];
    }
    //数组排序
    int n = 2 * m + 1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (s[j] < s[j + 1])
            {
                int t = s[j];
                s[j] = s[j + 1];
                s[j + 1] = t;
            }
            
        }
    }
    for (int i = 0; i <= n ; i++)
    {
        printf("%d ", s[i]);
    }
    printf("\n");
    return 0;
}
