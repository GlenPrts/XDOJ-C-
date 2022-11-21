#include <stdio.h>
int main()
{
    int n, m, s1 = 0, s2 = 0, x1 = 0, x2 = 0;
    scanf("%d %d", &n, &m);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            x1 += i;
            s1++;
        }
    }
    for (int i = 1; i < m; i++)
    {
        if (m % i == 0)
        {
            x2 += i;
            s2++;
        }
                
    }
    
    if ((m == x1) &&(n ==x2))
    {
        printf("yes %d %d", s1, s2);
    }else
        printf("no %d %d", s1, s2);
    return 0;
}