#include <stdio.h>
int main()
{
    int x1 = 0, x2 = 0;
    char m[30] = {};
    scanf("%s", &m);
    for (int i = 0; m[i] != '\0'; i++)
    {
        if (m[i] >= 48 && m[i] <=57)
        {
            x2++;
        }
        if ((m[i] >=65 && m[i] <= 90) || (m[i] >= 97 && m[i] <= 122))
        {
            x1++;
        }
        
           
    }
    printf("%d,%d", x1, x2);
    return 0;
}