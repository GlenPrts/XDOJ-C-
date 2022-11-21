#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d", &n);
    for (int i = 1; ; i++)
    {
        if (n%2==0)
        {
            n = n / 2;
        }else
        {
            n = 3 * n + 1;
        }
        if (n==1)
        {
            m = i;
            break;
        }
        
        
    }
    printf("%d", m);
    return 0;
}