#include <stdio.h>
int main()
{
    int m[10] = {}, s = 0;
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &m[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        if (m[i] == 0)
        {
            break;
        }
        if (m[i] % 2 !=0 )
        {
            s += m[i];
        }
        
    }
    printf("%d", s);
    return 0;
}