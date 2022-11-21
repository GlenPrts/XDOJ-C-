#include <stdio.h>
int function(int a, int b)
{
       int s = 0, t, n = 0, k, m[10000] = {};
       t = a;
       if (a > b)
       {
           a = b;
           b = t;
       }
       
       for (int i = a; i <= b; i++)
       {
           t = i;
           n = 0;
           for (int j = 0; t != 0; j++)
           {
               m[j] = t % 10;
               t /= 10;
               n++;
           }
           if (n >= 3)
           {
           t = 0;
           for (int o = 0; o < n; o++)
           {
               k = m[o];
               for (int i = 0; i < (n - 1); i++)
               {
                   m[o] *= k;
               }
               t += m[o];
           }
           if (t == i)
           {
               s++;
           }
           }
        
    }
    return s;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", function(a, b));
    return 0;
}