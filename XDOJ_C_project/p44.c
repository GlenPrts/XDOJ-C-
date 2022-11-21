#include <stdio.h>
int main()
{
    int n, r, s = 0, m[50] = {1,1};
    scanf("%d", &n);
    //找出斐波那契数列
    for (int i = 2; i < 50; i++)
    {
        m[i] = m[i - 2] + m[i - 1];
    }
    n--;
    //判断该数是否为素数
    r = m[n];
    for (int i = 1; i <= r; i++)
    {
        if (r % i == 0)
        {
            s++;
        }
        
    }
    if (s == 2)
    {
        printf("yes");
    }else
        printf("%d", r);
    return 0;
}