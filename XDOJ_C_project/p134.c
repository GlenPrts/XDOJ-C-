#include <stdio.h>
#include <memory.h>
int main()
{
    char m[10];
    memset(m, 0, 10);
    scanf("%s", m);
    int flag = sizeof(m);
    for (int i = 0; i < flag; i++)
    {
        for (int j = 0; j < flag - i - 1; j++)
        {
            if (m[j] < m[j + 1])
            {
                char t = m[j];
                m[j] = m[j + 1];
                m[j + 1] = t;
            }
            
        }
        
    }
    for (int i = 0; i < flag; i++)
    {
        printf("%c ", m[i]);
    }
    
    
}