#include <stdio.h>
int main()
{
    char m[101] = "";
    int s = 0;
    scanf("%s", &m);
    for (int i = 0; ; i++)
    {
        if (m[i] == '\0')
        {
            break;
        }
        s += m[i];
    }
    printf("%d", s & 0xFF);
    return 0;
}