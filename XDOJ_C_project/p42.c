#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    if (a % b == 0)
    {
        printf("yes");
    }else
    {
        c = a % b;
        a = a / b;
        printf("%d %d", a, c);
    }
    return 0;
}