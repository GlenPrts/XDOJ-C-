#include <stdio.h>
int main()
{
    float n, m = 0, t;
    scanf("%f", &n);
    t = n;
    if (n >210)
    {
        t = t - 210;
        m += t * 0.7;
        t = 210;
    }
    if (n >110)
    {
        t = t - 110;
        m += t * 0.55;
        t = 110;
    }
    if (n > 0)
    {
        m += t * 0.5;
    }
    printf("%.2f", m);
    return 0;
}