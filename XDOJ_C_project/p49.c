#include<stdio.h>
int main()
{
    int n, m = -1;
    scanf("%d", &n);
    for (int i = 0; i < 10000; i++)
    {
        if (n == i * i)
        {
            m = i;            
            break;
        }
        
    }
    if (m == -1)
    {
        printf("no");
    }else
        printf("%d", m);

    return 0;
}