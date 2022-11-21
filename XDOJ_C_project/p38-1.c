#include <stdio.h>
#include <string.h>
int main()
{
    char m1[12], m2[12], t;
    gets(m1);
    t = strlen(m1);
    for (int i = 0; i < t; i++)
    {
        m2[t - i - 1] = m1[i];
    }

    int arrflag = 1, sum = 0;
    for (int i = 0; i < t; i++)
    {
        sum += m1[i] - '0';
        if (m1[i] != m2[i])
        {
            arrflag = 0;
        }
    }

    if (arrflag == 1)
    {
        printf("%d", sum);
    }else
        printf("no");
}