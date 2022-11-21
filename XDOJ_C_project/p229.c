#include <stdio.h>
void fun(char x1[], char x2[])
{
    char s = 0, m[30] = "";
    for (int i = 0; x1[i] != '\0'; i++)
    {
        m[i] = x1[i];
        s++;
    }
    for (int i = 0; x2[i] != '\0'; i++)
    {
        m[s] = x2[i];
        s++;
    }
    printf("%s", m);
}
int main()
{
    char x1[20] = "", x2[20] = "";
    scanf("%s %s", &x1, &x2);
    fun(x1, x2);
    return 0;
}