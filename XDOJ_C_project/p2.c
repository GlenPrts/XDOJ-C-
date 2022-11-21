#include <stdio.h>
int main()
{
    int n, s = 1, m[1000] = {};
    scanf("%d", & n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }
     
        for (int i = 1; i < n; i++)
        {
            if (m[i -1] != m[i])
            {
                s++;
            }
            
        }
        
    printf("%d", s);
    return 0;
}