#include<stdio.h>
int main()
{
    int n, a[6] = {0, 0, 0, 0, 0, 0}, m[100]={};
    float s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }
    for (int  i = 0; i < n; i++)
    {
        s += m[i];
        if (m[i]<=50)
        {
            a[0] += 1;
        }else if (m[i]<=100)
        {
            a[1] += 1;
        }else if (m[i]<=150)
        {
            a[2] += 1;
        }else if (m[i]<=200)
        {
            a[3] += 1;
        }else if (m[i]<=300)
        {
            a[4] += 1;
        }else
        {
            a[5] += 1;
        }
               
    }
    s /= n;
    printf("%.2f\n", s);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}