#include <stdio.h>
int main()
{
    int arr[10], m[10], res[20];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 1;
    }
    int n;
    scanf("%d", &n);
    for (int i = n + 1; i < 10; i++)
    {
        res[i - n - 1] = arr[i];
    }
    for (int i = 0; i <= n; i++)
    {
        res[9 - n + i] = arr[i];
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", res[i]);
    }
    
    
}