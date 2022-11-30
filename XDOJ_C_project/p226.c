#include <stdio.h>
#include <string.h>
int main()
{
    char m[1000];
    scanf("%s", &m);
    for (int i = 0; i < strlen(m); i++)
    {
        int flag = 1;
        for (int j = 0; j < strlen(m) - i -1; j++)
        {
            if (m[j] > m[j + 1])
            {
                char t = m[j];
                m[j] = m[j + 1];
                m[j + 1] = t;
                flag = 0;
            }
            
        }
        if (flag )
        {
            break;
        }
        
    }
    printf("%s", m);
    return 0;   
}