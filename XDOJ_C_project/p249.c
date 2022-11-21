#include <stdio.h>
int main ()
{
    int n, m[1009] = {0}, s[25] = {0}, r = 0, t = 0;
    scanf("%d", &n);
    //找出100以内的质数
    for (int i = 0; i < 100; i++)
    {
        m[i] = i + 1;
    }
    for (int i = 0; i < 100; i++)
    {
        for (int j = 1; ; j++)
        {
            if (m[i] % j == 0)
            {
                t++;
            }
            if (j >= m[i])
            {
                break;
            }                     
        }
        if (t == 2)
        {
            s[r] = m[i];
            r++;
        }
        t = 0;
    }
    r = 0;
    //找出能整除n的质数并赋值给数组m[],r记录次数
    for (int i = 0;s[i] <= n; i++)
    {
        while(n % s[i] == 0)
        {
            m[r] = s[i];
            n /= s[i];
            r++;
        }
    }
    printf("%d", m[0]);
    for (int i = 1; i <= (r - 1); i++)
    {
        printf("*%d", m[i]);
    }
    return 0;
}