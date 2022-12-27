#include <stdio.h>
#include <stdlib.h>
typedef struct 
{
    int year;
    int month;
    int day;
    int big;
} File;

void swap(File *x1, File *x2)
{
    File tep = *x1;
    *x1 = *x2;
    *x2 = tep;
}

int comp(File *ptr)
{
    int flag = 0, m = 1;
    loop:
    switch (m)
    {
    case 1:
        if (ptr->year < (ptr + 1)->year)
        {
            flag = 1;
        }
        if (ptr->year == (ptr + 1)->year)
        {
            m = 2;
            goto loop;
        }
        break;
    case 2:
        if (ptr->month < (ptr + 1)->month)
        {
            flag = 1;
        }
        if (ptr->month == (ptr + 1)->month)
        {
            m = 3;
            goto loop;
        }
        break;
    case 3:
        if (ptr->day < (ptr + 1)->day)
        {
            flag = 1;
        }
        if (ptr->day == (ptr + 1)->day)
        {
            m = 4;
            goto loop;
        }
        break;
    case 4:
        if (ptr->big < (ptr + 1)->big)
        {
            flag = 1;
        }
        break;
    default:
        break;
    }
    return flag;
}

int main()
{
    File f[100], *ptr = f;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d/%d/%d", &ptr->year, &ptr->month, &ptr->day);
        scanf("%d", &ptr->big);
        ptr++;
        fflush(stdin);
    }
    
    for (int i = 0; i < n; i++)
    {
        ptr = f;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (comp(&f[j]))
            {
                swap(&f[j], &f[j + 1]);
            }
            
        }
        
    }
    ptr = f;
    for (int i = 0; i < n; i++)
    {
        printf("%d/%d/%d  %d\n", ptr->year, ptr->month, ptr->day, ptr->big);
        ptr++;
    }
    
}