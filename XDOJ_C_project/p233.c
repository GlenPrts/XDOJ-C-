#include <stdio.h>
#include <string.h>
void copystr(char *dest, char *string, int n)
{
    for (int i = n - 1; i <= strlen(string); i++)
    {
        
        dest[i - n + 1] = string[i];

    }
    
}

int main()
{
    char dest[50], string[50];
    int m;
    gets(string);
    scanf("%d", &m);
    if (m < strlen(string))
    {
        copystr(dest, string, m);
        printf("%s", dest);
    }else
    {
        printf("error");
    }
    return 0;
    
}