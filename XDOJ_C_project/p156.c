#include <stdio.h>
int main ()
{
    int m = 0;
    for (int i = 100; i < 500; i++)
    {
        if ((i % 7 ==0 || i % 11 ==0) && !(i % 7 == 0 && i % 11 == 0) )
        {
            m++;
        }
        
    }
    printf("%d", m);
    return 0;
}