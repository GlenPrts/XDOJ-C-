#include <stdio.h>
#include <memory.h>

int main()
{
    int p[1000], e[1000];
    memset(p, 0, sizeof(p));
    memset(e, 0, sizeof(e));

    int n, m, t;
    scanf("%d %d %d", &n, &m, &t);

    int flag = 0;
    for (flag = 0; flag < n; flag++)
    {
        scanf("%d %d", &p[flag], &e[flag]);
    }
    
    for (int i = 0; i < m; i++)
    {
        int x1, x2, h = 1;
        scanf("%d %d", &x1, &x2);
        for (int j = 0; j < n; j++)
        {
            if (e[j] == x2)
            {
                if (t)
                {
                    p[j] -= x1;
                }else
                {
                    p[j] += x1;
                }
                h = 0;
                break;
            }
            
        }
        if (h)
        {
            if (t)
            {
            p[flag] = -x1;
            }else
            {
            p[flag] = x1;
            }
            e[flag] = x2;
            flag++;
        }
        
    }

    for (int i = 0; i < flag; i++)
    {
        int u = 1;
        for (int j = 0; j < flag - i - 1; j++)
        {
            if (e[j] > e[j + 1])
            {
                int l = e[j];
                e[j] = e[j + 1];
                e[j + 1] = l;
                l = p[j];
                p[j] = p[j + 1];
                p[j + 1] = l;
                u = 0;
            }
            
        }
        if (u)
        {
            break;
        }
        
    }
    // 输出
    for (int i = 0; i < flag; i++)
    {
        if (p[i] == 0)
        {
            continue;
        }
        if (p[i] > 0 && i != 0)
        {
            printf("+");
        }
        if (p[i] != 1 && p[i] != -1)
        {
            printf("%d", p[i]);
            if (e[i] == 1)
            {
                printf("x");
            }else if (e[i] != 0)
            {
                printf("x^%d", e[i]);
            }
            
        }else
        {
            if (p[i] == -1)
            {
                printf("-");
            }
            if (e[i] == 1)
            {
                printf("x");
            }else if (e[i] != 0)
            {
                printf("x^%d", e[i]);
            }else
            {
                printf("1");
            }
            
        }
        

    }
     
    
    return 0;
    
}