#include <stdio.h>
int main ()
{
    int n, m = 0, s;
    scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            s = 1;
            for (int j = 1; j <= i;j ++)
            {
                s *= j;
            }
            m += s;
        }
        if (n == 0)
        {
            m = 1;
            s = 1;
        }
        
    printf("%d %d %d", n, s, m);
    return 0;
}