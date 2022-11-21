#include <stdio.h>
int main()
{
    int s, m[4] = {};
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &m[i]);
    }
    s = m[0];
    for (int i = 0; i < 4; i++)
    {
        if (s < m[i])
        {
            s = m[i];
        }
        
    }
    printf("%d", s);
    return 0;

}