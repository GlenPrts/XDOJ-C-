#include <stdio.h>
int main()
{
    int m[10];
    scanf("%d,%d,%d,%d,%d", &m[4], &m[3], &m[2], &m[1], &m[0]);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", m[i]);
    }
    
    return 0;
}