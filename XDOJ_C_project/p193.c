#include <stdio.h>
int main()
{
    int n;
    float m[12], res;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &m[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (m[j] > m[j + 1])
            {
                float t = m[j];
                m[j] = m[j + 1];
                m[j + 1] = t;
            }
            
        }
        
    }
    res = 0;
    for (int i = 1; i < n - 1; i++)
    {
        res +=m[i];
    }
    res /= (n - 2);
    printf("%.2f", res);
    return 0;
}