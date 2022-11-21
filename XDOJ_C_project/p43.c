#include<stdio.h>
int main()
{
    int n, m, a, b, s[10] = {};
    scanf("%d", &n);
    for (int i = 0; ; i++)
    {
        s[i] = n % 10;
        m = i + 1;
        n /= 10;
        if (n==0)
        {
            break;
        }
        
    }
    a = s[0];
    b = s[1];
    for (int i = 0; i < m; i++)
    {
        if (a>s[i])
        {
            a = s[i];
        }
        if (b<s[i])
        {
            b = s[i];
        }
        
    }
    
    printf("%d %d %d", m, b, a);
    return 0;
}