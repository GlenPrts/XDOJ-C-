#include <stdio.h>
int main()
{
    int s, t = 0, a, m;
    scanf("%d", &s);
    a = s - 3500;
    m = a;
    if (s <= 3500)
    {
        t = s;
    }else 
    {if (a >35000)
    {
        t += (m - 35000) * 0.7;
        m = 35000;
    } 
    if (a > 9000)
    {
        t += (m - 9000) * 0.75;
        m = 9000;
    } 
    if (a > 4500)
    {
        t += (m - 4500) * 0.8;
        m = 4500;
    } 
    if (a > 1500)
    {
        t += (m - 1500) * 0.9;
        m = 1500;
    } 
     if ( a > 0)
    {
        t +=  m * 0.97;
    }
        t += 3500;
    }



    printf("%d", t);
    
}