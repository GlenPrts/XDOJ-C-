#include <stdio.h>
int main()
{
    int n, m[100] = {}, s = 0;
    float S = 0;
    scanf("%d", &n);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
        s += m[i];
    }
    S = s * 1.0 / n;
    printf("%.2f", S);
    return 0;
}