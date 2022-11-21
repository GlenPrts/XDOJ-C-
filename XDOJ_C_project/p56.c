#include <stdio.h>
int main()
{
    int a, b, c, s;
    scanf("%d %d %d", &a, &b, &c);
    s = a * b;
    if (a * a + b * b == c * c)
    {
        printf("%d", s);
    }else
        printf("no");
    return 0;
}