#include <stdio.h>
int main()
{
    int n = 0, j = 0, s, m[1000] = {};
    for (int i = 0; ; i++)
    {
        scanf("%d", &m[i]);
        if (m[i] == 0)
        {
            s = i;
            break;
        }
        
    }
    for (int i = 0; ; i++)
    {
        if (m[i] == 0)
        {
            break;
        }
        
        if (m[i] == 1)
        {
            n++;
        }else 
        {
            j = 0;
            for ( ; ; )
            {
                if (m[i] ==2)
                {
                    j++;
                    i++;
                }else
                {
                    i--;
                    break;
                }
                
            }
            n += j * (j + 1);
        }
        
    }
    printf("%d", n);
    return 0;
}