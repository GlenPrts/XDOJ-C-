#include <stdio.h>
void fun(int n)
{
    int m[300] = {}, p[1000] = {}, s = 0;
    for (int i = 0; i < 1000; i++)
    {
        p[i] = i + 1;
    }
    for (int i = 0; i < n ; i++)
    {
        int t = 0;
        for (int l = 1; l <= p[i]; l++)
        {
            if (p[i] % l ==0 )
            {
                t++;
            }
            
        }
        if (t == 2)
        {
            m[s] = p[i];
            s++;
        }  
    }
    printf("%d\n", s);
    for (int i = 0; i < s; i++)
    {
        printf("%d ", m[i]);
    }
    
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}