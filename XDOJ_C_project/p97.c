#include <stdio.h>
int main()
{
    char m[26] = {};
    for (int i = 0; i < 26; i++)
    {
        m[i] = 97 + i;
        printf("%c ", m[i]);
    }
    printf("\n");
    for (int i = 0; i < 26; i++)
    {
        printf("%c ", m[25 - i]);
    }
    return 0;
}