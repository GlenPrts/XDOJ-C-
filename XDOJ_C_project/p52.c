#include <stdio.h>
int main()
{
    char n;
    scanf("%c", &n);
    if (n >= 97 && n<=122)
    {
        n -= 32;
    }else if (n <= 90 && n >= 65)
    {
        n += 32;
    }

    printf("%c", n);
    return 0;
}