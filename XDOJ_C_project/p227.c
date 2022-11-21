#include <stdio.h>
int fun(char m[])
{
    int t = 0;
    for (int i = 0; m[i] != '\0'; i++)
    {
        if ((m[i] >=65 &&m[i] <= 90) || (m[i] >= 97 &&m[i] <= 122))
        {
            t++;
        }
        
    }
    return t;
}
int main()
{
    char m[30] = "";
    scanf("%s", &m);
    printf("%d", fun(m));
}