#include <stdio.h>
int main()
{
    int n, t = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            t++;
        }
    }
    if (t == 2)
    {
        printf("YES");
    }else
        printf("NO");
    return 0;
}