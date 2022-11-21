#include<stdio.h>
int main()
{
    int y, i, n, m = 10;
    do
    {
        n = m % 10;
        n = n * 10 + m / 10;
        y = m - 27;
        if (n==y)
        {
            i++;
        }
        m++;
    } while (m<=99);
    printf("%d", i);
}