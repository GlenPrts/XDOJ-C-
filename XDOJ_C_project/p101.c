#include <stdio.h>
int main()
{
    char m[4] = {};
    scanf("%c%c%c%c", &m[0], &m[1], &m[2], &m[3]);
    for (int i = 0; i < 4; i++)
    {
        if (m[i] > 47 && m[i] < 58)
        {
            m[i] = '*';
        }else if (m[i] > 64 && m[i] < 91)
        {
            m[i] += 32;
        }else if (m[i] > 96 && m[i] <123)
        {
            m[i] -= 32;
        }else
            m[i] = '@';
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%c", m[i]);
    }
    return 0;
}