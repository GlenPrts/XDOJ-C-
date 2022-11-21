#include<stdio.h>
int main()
{
    int n, m[100] = {}, s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }
    for (int i = 1; i < n - 1; i++)
    {
        if ((m[i - 1]>m[i]&&m[i +1]>m[i])||(m[i -1]<m[i]&&m[i +1]<m[i]))
        {
            s += 1;
        }
        
    }
    printf("%d", s);
    return 0;
}