#include <stdio.h>
#include <string.h>
int main()
{
    char string[1000];
    gets(string);
    int max = 0, flag = 0;
    for (int i = 0; string[i] != 0; i++)
    {
        if (string[i] != ' ' && string[i] != '.')
        {
            flag++;
        }else
        {
            if (flag > max)
            {
                max = flag;
            }
            flag = 0;
        }
        
    }
    printf("%d", max);
    return 0;
}