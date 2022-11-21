#include <stdio.h>
int main()
{
    int n, A[100], arr[100], k, flag = 0;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }


    for (int i = 0; i < n; i++)
    {
        if (A[i] == k)
        {
            arr[flag] = i;
            flag++;
        }
    }

    if (flag)
    {
        for (int i = 0; i < flag; i++)
        {
            printf("%d ", arr[i]);
        }
    }else
        printf("-1");
}