#include<stdio.h>
int main()
{
    int n, c, s, m[100] = {}, b[100] = {},j = 0;
    char a[100] = {};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }
    for (int i = 0; i < n; i++)
    {
        c = m[i];
        for ( ; ;)
        {
            a[i] += c % 10;
            c /= 10;
            if (c == 0)
            {
                break;
            }
            
        }
    }
    c = a[0];
    for (int i = 0; i < n; i++)
    {
        if (c < a[i])
        {
            c = a[i];
        }
   }
    for (int i = 0; i < n; i++)
    {
        if (c==a[i])
        {
            b[j] = m[i];
            j++;
        }    
        
    }
    s = b[0];
    for (int  i = 0; i < n; i++)
    {
        if (s<b[i])
        {
            s = b[i];
        }
        
    }
    
    printf("%d", s);
    return 0;
}