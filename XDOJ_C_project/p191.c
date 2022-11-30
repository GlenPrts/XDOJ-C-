#include <stdio.h>
int main()
{
    char m[10];
    scanf("%s", &m);
    for (int i = 0; i < 7; i++)
    {
        if (m[i] >= 'A' && m[i] <= 'Z')
        {
            m[i] = 'Z' + 1 - (m[i] - 'A' + 1);
        }else
        {
            m[i] = 'z' + 1 - (m[i] - 'a' + 1);
        }
    }
    printf("%s", m);
    return 0;
}