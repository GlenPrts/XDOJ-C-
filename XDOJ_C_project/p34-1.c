#include <stdio.h>
int function(int a, int b)
{
    if (a > b)
    {
        int t = a;
        a = b;
        b = t;
    }

    int t, n, s = 0, m[6];
    for ( ; a <= b; a++)
    {
        t = a;
        for (int i = 0; t != 0; i++)
        {
            m[i] = t % 10;
            t /= 10;
            n=i;
        }
        if (n > 1)
        {
            for (int i = 0; i <= n; i++)
            {
                int y = m[i];
                for (int j = 0; j < n; j++)
                {
                    m[i] *= y;
                }
                t += m[i];
            }
            if (t == a)
            {
                s++;
            }
        }
    }
    return s;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", function(a, b));
    return 0;
}