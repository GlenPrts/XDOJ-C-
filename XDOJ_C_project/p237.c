#include <stdio.h>
#include <string.h>
#include <memory.h>

void copy(char *dest, char *string, int n)
{
    for (int i = n; i <= strlen(string); i++)
    {
        *(dest++) = *(string + i - 1);
    }
    
}

int main()
{
    char string[1000], dest[1000];
    int n = 0;
    memset(dest, 0, 1000);
    memset(string, 0, 1000);
    gets(string);
    scanf("%d", &n);
    if (n > strlen(string))
    {
        printf("error");
        return 0;
    }
    copy(dest, string, n);
    printf("%s", dest);
    return 0;
}