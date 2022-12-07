#include <stdio.h>
#include <string.h>
int main()
{
    char string[50], *flag, n = 1;
    gets(string);
    flag = &string[strlen(string) - 1];
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] != *(flag - i))
        {
            n = 0;
            printf("no");
            break;
        }
        
    }
    if (n)
    {
        printf("yes");
    }
    return 0;
    
}