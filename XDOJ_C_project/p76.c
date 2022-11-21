#include <stdio.h>
int f(int a, int m[])
{
    int t = 1;
    for (int i = 0; i < 30; i++)
    {
        if (m[i] == a)
            t = 0;
    }
    return t;
}
int main()
{
    int n, arr[30], m[30], mnumber[30];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 30; i++)
    {
        m[i] = 9999999;
        mnumber[i] = 0;
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n - k - 1; i++)
        {

            if (arr[i] > arr[i + 1])
            {
                int t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;
            }
        }
    }

    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (f(arr[i],m))
        {
            m[flag] = arr[i];
            flag++;
        }
        
        mnumber[flag - 1]++;
        
    }     
    

    for (int i = 0; i < flag; i++)
    {
        printf("%d:%d\n", m[i], mnumber[i]);
    }
}