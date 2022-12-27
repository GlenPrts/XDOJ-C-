#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    scanf("%s", string);
    unsigned int num = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] >= '0' && string[i] <= '9')
        {
            num = num * 10 + string[i] - '0';
        }
    }
    unsigned int res = num - 1;
    int flag = 0;
    for (unsigned int i = 1; i < num; i++) 
    {
        if (num % i == 0)
        {
            flag++;
        }
        
    }
    for (; num % res != 0; res--);

    if (flag == 1 || num == 0)
    {
        res = num;
    }
    printf("%d", res);
    
    return 0;
}