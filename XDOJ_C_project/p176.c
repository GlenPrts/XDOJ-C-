#include <stdio.h>
int main()
{
    int n, m[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        int msum = 0, nsum = 0;
        for (int j = 0; j < n; j++)
        {
            if (m[i] > m[j])
            {
                nsum++;
            }else if (m[i] < m[j])
            {
                msum++;
            }
            
        }
        if (nsum == msum)
        {
            res = m[i];
        }
    }

    printf("%d", res);
    return 0;
    
}