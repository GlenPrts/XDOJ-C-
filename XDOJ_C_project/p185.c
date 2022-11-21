#include <stdio.h>
float ab( float a)
{
    if (a < 0)
    {
        a = -a;
    }
    return a;
}
int main()
{
    float a, n, m = 0;
    scanf("%f", &a);
    n = a;
    while (ab(n - m) > 0.00001)
    {
        m = n;
        n = (n + a / n) / 2;
    }
    printf("%.5f", n);
    return 0;
}