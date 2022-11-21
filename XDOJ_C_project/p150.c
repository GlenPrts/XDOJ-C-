#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d", &n);
    if (n >= 10)
    {
        m = 3 * n - 11;
    }else if (n >= 1)
    {
        m = 2 * n - 1;
    }else
    {
        m = n;
    }
    printf("%d", m);
    return 0;
}