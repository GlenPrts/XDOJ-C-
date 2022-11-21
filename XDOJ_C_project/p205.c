#include <stdio.h>
int main()
{
    int n;
    char a;
    scanf("%c", &a);
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 1; j--)
        {
            printf(" ");
        }
        printf("%c", a);
        for (int j = 0; j < (n - i); j++)
        {
            printf(" %c", a);
        }
        printf("\n");
    }
    return 0;
}