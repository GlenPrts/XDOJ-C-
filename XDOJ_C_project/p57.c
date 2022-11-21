#include <stdio.h>
int fib(int n)
{
    int m[50] = {7, 11};
    for (int i = 2; i < 50; i++)
    {
        m[i] = m[i - 1] + m[i - 2];
    }
    return m[n];
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fib(n));
    return 0;
}