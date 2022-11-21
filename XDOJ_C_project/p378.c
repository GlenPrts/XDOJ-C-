#include <stdio.h>
int main()
{
    int n, m[22] = {1,2}, t[20] = {}, r = 0, o;
    scanf("%d", &n);
    for (int i = 2; i < 22; i++)
    {
        m[i] = m[i - 1] * 2;
    }
    for (int i = 20; n != 0; i--)
    {
        if ((n - m[i]) >= 0)
        {
            n -= m[i];
            t[r] = m[i];
            r++;
        }
        if (i == 0)
        {
            o = -1;
            break;
        }
                         
    }
    if (o == -1)
    {
        printf("%d", o);
    }else
    {
        for (int i = 0; i < r; i++)
        {
            printf("%d ", t[i]);
        }
        
    }
    return 0;
}