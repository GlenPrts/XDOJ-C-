#include <stdio.h>
int main()
{
    int n, a = 0, b = 0, c = 0;
    scanf("%d", &n);
    for (; a < 10; a++)
    {
        b = 0;
        for ( ; b < 10; b++)
        {
            c = 0;
            for ( ; c < 10; c++)
            {
                if (a * 100 + b * 10 + c + c * 100 +b * 10 + a == n)
                {
                    printf("%d %d %d\n", a, b, c);
                }
                
            }
            
        }
           
    }
    return 0;
}