#include <stdio.h>
int main()
{
    int n, t = 10;
    scanf("%d", &n);
    while(t >= 10)
    {
        t = 0;
        while(n != 0)
        {
            t += n % 10;
            n /= 10;
        }
        n = t;
    }

    printf("%d", t);
    return 0;
}