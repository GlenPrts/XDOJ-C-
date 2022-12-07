#include <stdio.h>

void place(int (*arr)[10], int *num, int m, int n)
{
    int nflag = 0, flag = 1, row = 0, col = n - 1;
    for (int i = 0; i < m * n; i++)
    {
        arr[row][col] = num[i];

        if (col == 0 && nflag == -1)
        {
            flag = 0;
            row++;
            col--;
        }
        if (col == n - 1 && nflag == 1)
        {
            flag = 1;
            row++;
            col++;
        }
        
        if (flag)
        {
            col--;
            nflag = -1;

        }else
        {
            col++;
            nflag = 1;
        }
        
    }
    
}

int main()
{
    int m, n,num[50], arr[10][10];
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m * n; i++)
    {
        scanf("%d", &num[i]);
    }
    //num数组排序
    for (int i = 0; i < n * m; i++)
    {
        int flag = 1;
        for (int j = 0; j < n * m - i -1; j++)
        {
            if (num[j] > num[j + 1])
            {
                int t = num[j];
                num[j] = num[j + 1];
                num[j + 1] = t;
                flag = 0; 
            }
            
        }
        if (flag)
        {
            break;
        }
        
    }

    place(arr, num, m, n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", arr[i][j]);
        }
        if (i != m - 1)
            puts("");
    }
    
    return 0;
}