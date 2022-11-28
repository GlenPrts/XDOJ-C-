#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s", &str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 'a' - 'A';
        }
        
    }
    char flagstr[100], n = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            flagstr[n] = i;
            n++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (str[flagstr[j]] > str[flagstr[j + 1]])
            {
                char m = str[flagstr[j]];
                str[flagstr[j]] = str[flagstr[j + 1]];
                str[flagstr[j + 1]] = m;
            }
            
        }
        
    }
    printf("%s", str);
    
    
}