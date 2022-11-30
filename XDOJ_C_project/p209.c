#include <stdio.h>
#include <string.h>
void char_cp(char *str, char *ch, int m)
{
    int n = 0;
    for (int i = m + 1; str[i - 1]; i++)
    {
        ch[n] = str[i];
        n++;
    }
    
}

int main()
{
    char str[50], ch[50];
    int m;
    gets(str);
    scanf("%d", &m);
    char_cp(str, ch, m);
    printf("%s", ch);
    return 0;
}