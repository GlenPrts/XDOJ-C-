#include <stdio.h>
void fun(char m[])
{
    char o = 1,t[30] = "";
    t[0] = m[0];
    for (int i = 2; m[i] != '\0'; i += 2)
    {
        t[o] = m[i];
        o++;
    }
    printf("%s", t);
}
int main()
{
    char m[30] = "";
    scanf("%s", &m);
    fun(m);
}