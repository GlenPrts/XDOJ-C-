#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    if(a==0)
        c = b;
    else if(b==0)
        c = a;
    else 
    {   if (a<b)
    {
        d = a;
    }else
        d = b;

        for (int i = 1; i <= d; i++)
        {
            if ((a%i==0)&&(b%i==0))
            {
                c = i;
            }
            
        }
        
    }
    printf("%d", c);
    return 0;
    
}