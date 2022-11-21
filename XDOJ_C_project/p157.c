#include <stdio.h>
int main ()
{
    int n, m = 0, i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        m += i;
        i++;
    }
    printf("%d", m);
    return 0;
}