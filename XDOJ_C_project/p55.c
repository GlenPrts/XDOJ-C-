#include <stdio.h>
int main()
{
    int n;
    float s = 0, a[30] = {2, 3}, b[30] = {1, 2};
    scanf("%d", &n);
    for (int i = 2; i < 30; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
        b[i] = b[i - 1] + b[i - 2];
    }
    for (int i = 0; i < n; i++)
    {
        s += a[i] / b[i];
    }  
    printf("%.2f", s);
    return 0;
}