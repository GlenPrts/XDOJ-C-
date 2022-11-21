#include <stdio.h>
int main()
{
    int m, t = 0;
    scanf("%d", &m);
        if (m == 0)
    {
        t = 1;
    }
    for (; m != 0;)
    {
        m /= 10;
        t++;
    }   
    printf("%d", t);
}