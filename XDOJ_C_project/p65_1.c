#include <stdio.h>
int main()
{
    int n, s = 0, m[11] = {};
    scanf("%d", &n);
    while (n > 10)
    {
        s = 0;
        for (int i = 0; n != 0; i++)
        {
            m[i] = n % 10;
            n /= 10;
            s++;
        }
        n = 0;
        for (int i = 0; i < s; i++)
        {
            n += m[i];
        }
    }
    printf("%d", n);
    return 0;
}