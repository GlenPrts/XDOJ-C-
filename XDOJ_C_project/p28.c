#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    switch (b)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        c = 31;
        break;
    case 4: case 6: case 9: case 11:
        c = 30;
        break;
    case 2:
        if(((a%4==0)&&(a%100!=0))||(a%400==0))
        {
            c = 29;
        }
        else
            c = 28;
        break;
        default:
        break;
    }
    printf("%d", c);
    return 0;
}