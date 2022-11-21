#include <stdio.h>
#include <math.h>
int main()
{
    float n;
    scanf("%f", &n);
    if (n >= 0)
    {
        n = sqrt(n);
    }else
    {
        n = (n + 1) * (n + 1) + 2 * n + 1 / n;
    }
    printf("%.2f", n);
    return 0;
}