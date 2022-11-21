#include<stdio.h>
int main()
{
    int n, m = 0;
    scanf("%d", &n);
    for (int i = 0; i < 9; i++)
    {
        m = m + n % 10;
        n = n / 10;
    }
    printf("%d", m);
    return 0;
    
}