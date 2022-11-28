#include <stdio.h>
#include <string.h>
int main()
{
    int arr[22][22], n;
    scanf("%d", &n);
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i];
        sum += arr[n - 1 - i][i];
    }
    if (n & 1)
    {
        int flag = (n - 1) / 2;
        sum -= arr[flag][flag];
    }
    
    printf("%d", sum);
    
}