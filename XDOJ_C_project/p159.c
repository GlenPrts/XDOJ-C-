#include <stdio.h>
int main()
{
    int m, n, s1 = 1, s2 = 1, s3 = 1;
    float s;
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= m; i++)
    {
        s1 *= i;
    }
    for (int i = 1; i <= n; i++)
    {
        s2 *= i;
    }
    for (int i = 1; i <= (m -n); i++)
    {
        s3 *= i;
    }
    s = s1 / (s3 * 1.0) / s2;
    printf("%.2f", s);
    return 0;
}