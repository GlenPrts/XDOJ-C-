#include <stdio.h>
int main()
{
    int n, m[11] = {};
    float t[11] = {}, max, min, average = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }
    for (int i = 0; i < n; i++)
    {
        t[i] = (float)9 / 5 * m[i] + 32;
    }
    max = t[0];
    min = t[0];
    for (int i = 0; i < n; i++)
    {
        if (max < t[i])
        {
            max = t[i];
        }
        if (min > t[i])
        {
            min = t[i];
        }
        average += t[i];
    }
    average /= n;
    printf("%.1f ", t[0]);
    for (int i = 1; i < n; i++)
    {
        if (i % 5 == 0)
        {
            printf("\n");
        }
        printf("%.1f ", t[i]);
    }
    printf("\n%.1f %.1f %.1f", min, max, average);
    return 0;
}