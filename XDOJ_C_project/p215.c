#include <stdio.h>
void swap(char *x1, char *x2)
{
    char x = *x1;
    *x1 = *x2;
    *x2 = x;
}
int main()
{
    int t, n = 0;
    char m[20] = "";
    scanf("%s", &m);
    for (int i = 0; m[i] != '\0'; i++)
    {
        n++;
    }
    t = n;
    if (n & 1 == 1)
    {
        t--;
    }
    t /= 2;
    n--;
    for (int i = 0; i < t; i++)
    {
        swap(&m[i], &m[n - i]);
    }
    printf("%s", m);
    return 0;
}