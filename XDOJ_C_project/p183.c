#include <stdio.h>
int main()
{
    int m, n, s = n, s1, s2;
    scanf("%d %d", &m, &n);
    if (m < n)
    {
        s = m;
    }
    
    for (int i = s; ; i--)
    {
     if (n % i ==0 && m % i ==0)
     {
         s1 = i;
         break;
     }

    }
    for (int i = 1; ; i++)
    {
        if (i % n == 0 && i % m == 0)
        {
            s2 = i;
            break;
        }
        
    }
    printf("%d %d", s1, s2);
    return 0;
}