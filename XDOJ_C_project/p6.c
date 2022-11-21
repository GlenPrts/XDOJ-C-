#include <stdio.h>
int main()
{
    int n, arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


    //计算每个整数各自的数字和
    int m[1000];
    for (int i = 0; i < n; i++)
    {
        int t = arr[i];
        m[i] = 0;
        while(t != 0)
        {
            m[i] += t % 10;
            t /= 10;
        }
    }


    //排序
    for (int i = 0; i < n; i++)
    {
        int arrflag = 0;
        for (int k = 0; k < n - i - 1; k++)
        {
            if (m[k] < m[k + 1])
            {
                int t = m[k];
                m[k] = m[k + 1];
                m[k + 1] = t;
                t = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = t;
                arrflag = 1;
            }else if (m[k] == m[k + 1])
            {
                if (arr[k] > arr[k + 1])
                {
                    int t = arr[k];
                    arr[k] = arr[k + 1];
                    arr[k + 1] = t;
                    arrflag = 1;
                }
            }
            
        }
        if (arrflag == 0)
            break;
    }


    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", arr[i], m[i]);
    }

    return 0;
}