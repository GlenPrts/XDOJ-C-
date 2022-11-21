#include<stdio.h>
    int abs( int a)
    {
        a = (a < 0) ? -a : a;
        return a;
    }

    int main()
    {
        int n,p,s=1000, m[1000], a = 0;
        scanf("%d", &n);
        for (int i=0; i < n;i++) scanf("%d", &m[i]);

        for (int i=0; i < n;i++)
        {
            while (a<n)
            {   if(a==i)
                a++;
            
            
                p = abs(m[i] - m[a]);
                s = (s < p) ? s : p;
                a++;
            }
            a = 0;
        }
            printf("%d", s);
    }