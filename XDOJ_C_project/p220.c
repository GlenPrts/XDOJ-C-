#include <stdio.h>
int fn(char *n)
{
    int i = 0;
    while (n[i++] != 0);
    
    return i - 1;
}

int main()
{
    char string[10000];
    gets(string);
    printf("%d", fn(string));
    return 0;
}