#include <stdio.h>
int main()
{
    int a, b, m[4] = {};
    scanf("%d %d", &a, &b);
    m[0] = (a + b) * (a + b);
    m[1] = (a - b) * (a - b);
    m[2] = a * a + b * b;
    m[3] = a * a - b * b;
    a = m[0];
    b = m[0];
    for (int i = 0; i < 4; i++)
    {
        if (a < m[i])
        {
            a = m[i];
        }
        if (b > m[i])
        {
            b = m[i];
        }
        
    }
    printf("%d %d", a, b);
    
}