#include <stdio.h>
#include <string.h>
#include <memory.h>
int  main()
{
    char string[105];
    int res[100];
    memset(string, 0, 105);
    memset(res, 0, sizeof(res));
    scanf("%s", string);

    int flag = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        int u = 0, t = 0;
        while (string[i] >= '0' && string[i] <= '9')
        {
            t = t * 10 + string[i] - '0';
            i++;
            u = 1;
        }
        if (u)
        {
            res[flag] = t;
            flag++;
        }  
        
    }

    for (int i = 0; i < flag; i++)
    {
        for (int j = 0; j < flag - i - 1; j++)
        {
            if (res[j] < res[j + 1])
            {
                int t = res[j];
                res[j] = res[j + 1];
                res[j + 1] = t; 
            }
            
        }
        
    }
    
    for (int i = 0; i < flag; i++)
    {
        printf("%d ", res[i]);
    }
    
}