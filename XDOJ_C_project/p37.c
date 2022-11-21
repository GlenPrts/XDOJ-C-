#include <stdio.h>
int main()
{
    int n, m[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }
    int m1[100], m2[100], t1 = 0, t2 = 0;
    //录入奇偶数
    for (int i = 0; i < n; i++)
    {
        if (m[i] & 1)
        {
            m1[t1] = m[i];
            t1++;
        }else
        {
            m2[t2] = m[i];
            t2++;
        }
        
    }
    //排序
    for (int i = 0; i < t1; i++)
    {
        int arrflag = 0;
        for (int j = 0; j < t1 - i - 1; j++)
        {
            int t = m1[j];
            if (m1[j] < m1[j + 1])
            {
                m1[j] = m1[j + 1];
                m1[j + 1] = t;
                arrflag = 1;
            }
            
        }
        if (arrflag == 0)
            break;
    }
    for (int i = 0; i < t2; i++)
    {
        int arrflag = 0;
        for (int j = 0; j < t2 - i - 1; j++)
        {
            int t = m2[j];
            if (m2[j] < m2[j + 1])
            {
                m2[j] = m2[j + 1];
                m2[j + 1] = t;
                arrflag = 1;
            }
            
        }
        if (arrflag == 0)
            break;
    }

    
    for (int  i = 0; i < t2; i++)
    {
        printf("%d ", m2[i]);
    }
    for (int i = 0; i < t1; i++)
    {
        printf("%d ", m1[i]);
    }
    
}