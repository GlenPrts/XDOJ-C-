#include <stdio.h>
int main()
{
    int m[1000] = {}, n[170] = {}, p, r = 0, t;
    scanf("%d", &p);
    for (int i = 0; i < 1000; i++)
    {
        m[i] = i + 1;        
    }
    for (int i = 0; i < 1000; i++)
    {
       t = 0;
        for (int j = 1; j <= i+1 ; j++)
        {
            if (m[i] % j == 0)
            {
                t++;
            }
            
        }
        if (t == 2)
        {
            n[r] = m[i];
            r++;
        }        
    }   
    t = 0;
    for (int i = p - 1; i < p+10; i++)
    {
        t += n[i];
    }
    printf("%d", t);
}