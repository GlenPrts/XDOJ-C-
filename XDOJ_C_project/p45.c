#include<stdio.h>
#include<math.h>
int main()
{
    int n, m[30] = {}, s;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }
    s =abs(m[1] - m[0]);
    for (int i = 0; i < n - 1; i++)
    {
        if (s < abs(m[i + 1] - m[i]))
        {
            s = abs(m[i + 1] - m[i]);
        }
        
        
    }
    
    printf("%d", s);
    return 0;
}