#include<stdio.h>
int main()
{
    int m = 10, a, b, n;
    n = m / 2;
    a = n;
    b = n;
    while((a>=4)||(b>=2))
    {
        if (a>=4)
        {
            n++;
            b++;
            a = a - 3;
        }
        if (b>=2)
        {
            n++;
            a++;
            b = b - 1;
        }
        
    }

    printf("%d", n);
}