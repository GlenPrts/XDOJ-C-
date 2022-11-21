#include <stdio.h>
int main()
{
    int n;
    float x1, x2;
    scanf("%d", &n);
    x1 = 100;
    x2 = 100;
    for (int i = 0; i < n; i++)
    {
        x2 /= 2;
        x1 += x2 * 2;
    }
    x1 -= x2 * 2;
    printf("S=%.3f h=%.3f", x1, x2);
    return 0;
}