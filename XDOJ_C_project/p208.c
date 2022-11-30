#include <stdio.h>
void sort(int *num, int n)
{
    int nflag = 0, n2flag = 0, n1[20], n2[20];
    
    for (int i = 0; i < n; i++)
    {
        if (num[i] & 1)
        {
            n1[nflag] = num[i];
            nflag++;
        }else
        {
            n2[n2flag] = num[i];
            n2flag++;
        }
        
    }
    for (int i = 0; i < nflag; i++)
    {
        for (int j = 0; j < nflag - i - 1; j++)
        {
            if (n1[j] > n1[j + 1])
            {
                int t = n1[j];
                n1[j] = n1[j + 1];
                n1[j + 1] = t;
            }
            
        }
        
    }
    for (int i = 0; i < n2flag; i++)
    {
        for (int j = 0; j < n2flag - i - 1; j++)
        {
            if (n2[j] > n2[j + 1])
            {
                int t = n2[j];
                n2[j] = n2[j + 1];
                n2[j + 1] = t;
            }
            
        }
        
    }

    int flag = 0;

    for (; flag < nflag; flag++)
    {
        num[flag] = n1[flag];
    }
    num[flag] = -1;
    flag++;
    for (int i = 0; i < n2flag; i++)
    {
        num[i + flag] = n2[i];
    }
    
    
}

int main()
{
    int num[20], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    sort(num, n);

    for (int i = 0; i < n + 1; i++)
    {
        if (num[i] == -1)
        {
            printf("  ");
            i++;
        }
        printf("%d ", num[i]);
        
    }
    
    
    
}