#include <stdio.h>
int main()
{
    int n, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {  
        if (i % 2 == 0)
        {
            s2++;
        }else
            s1++;
        
        if (i % 3 ==0)
        {
            s3++;
        }
        if (i % 5 == 0)
        {
            s4++;
        }
        if (i % 7 ==0)
        {
            s5++;
        }

    }
    printf("%d %d %d %d %d", s1, s2, s3, s4, s5);
    return 0;
}