#include <stdio.h>
int main()
{
    int n;
    float m = 0, s = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            m = 1;
        }else
        if ( i % 2 != 0)
        {
            m -= s / (s * 2 - 1);
        }else 
        {
            m += s / (s * 2 -1);
        }
        s++;
    }
    printf("%.3f", m);
    return 0;
}