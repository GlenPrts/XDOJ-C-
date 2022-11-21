#include <stdio.h>


int abs(int a)
{
    if (a < 0)
        return -a;
    return a;
}


int main()
{
    int n, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //arr数列排序
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - 1 - i; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                int t = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = t;
            }
            
        }
    }
    
    int flag = 1;
    int t = arr[1] - arr[0];
    for (int i = 2; i < n; i++)
    {
        if (arr[i] != arr[i - 1] + t)
        {
            flag = 0;
        }
        
    }

    if (flag && n != 1)
    {
        printf("%d", abs(t));
    }else
        printf("no");
}