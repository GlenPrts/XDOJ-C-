#include<stdio.h>
int main()
{
    float n, m;
    scanf("%f", &n);
    if (n<=110)
    {
        m = 0.5 * n;
    }else if (n<210)
    {
        m = (n - 110) * 0.55 + 55;
    }else
    {
        m = 110 + (n - 210) * 0.7;
    }
    printf("%.2f", m);
    return 0;
}