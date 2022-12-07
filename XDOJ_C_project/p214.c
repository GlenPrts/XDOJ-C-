#include <stdio.h>
#include <string.h>
//字符统计

void count(char string[], char ptr[])
{
    memset(ptr, 0, 5);
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] >= '0' && string[i] <= '9')
        {
            ptr[3]++;
        }else if (string[i] >= 'A' && string[i] <= 'Z')
        {
            ptr[0]++;
        }else if (string[i] >= 'a' && string[i] <= 'z')
        {
            ptr[1]++;
        }else if (string[i] == ' ')
        {
            ptr[2]++;
        }else
        {
            ptr[4]++;
        }
    }
    
}

int main()
{
    char string[100], num[5];
    gets(string);
    count(string, num);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}