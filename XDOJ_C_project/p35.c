#include <stdio.h>
int main()
{
    int n,t = 0,s1, s2, m[200] = {};
    scanf("%d", &n);
    //找出素数数组
    for (int i = 1; i <= 1000; i++)
    {
        int u = 0;
        for (int j = 1; j <= 1000; j++)
        {
            if (i % j == 0)
            {
                u++;
            }            
        }
        if (u == 2)
        {
            m[t] = i;
            t++;
        }   
    }
    //循环遍历找出分解值
    for (int i = 0; i < t; i++)
    {
        s1 = m[i];
        s2 = n - s1;
        for (int j = 0; j < t; j++)
        {
            if (s2 == m[j])
            {
                goto lop;
            }
            
        }
        
    }
    lop :
        printf("%d %d", s1, s2);
        return 0;
}