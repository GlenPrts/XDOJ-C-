#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    for (a ; a <= b; a++)
    {
        c = 0;
        for (int i = 1; i < a; i++)
        {
            if(a%i==0)
                c += i;
        }
        if (c==a)
        {
            printf("%d\n", a);
        }
        
    }
    
}