#include <stdio.h>
int main()
{
    int m, n, t;
    scanf("%d %d", &m, &n);
    if (m < n)
    {
        m = t;
        m = n;
        n = t;
    }
    m = m % 10;
    n = n * n;
    printf("%d %d", m, n);
    return 0;
}