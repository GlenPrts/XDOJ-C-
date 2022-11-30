#include <stdio.h>
void chang(int *num,int n)
{
    int max = 0, min = 0;
    for (int i = 0; i < n; i++)
    {
        if (num[max] < num[i])
        {
            max = i;
        }
        if (num[min] > num[i])
        {
            min = i;
        }
    }
    int t = num[max];
    num[max] = num[min];
    num[min] = t;
    
}

int main()
{
    int n, num[20];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    chang(num, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
    
    
}