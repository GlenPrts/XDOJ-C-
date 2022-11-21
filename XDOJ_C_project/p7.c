#include<stdio.h>
int main()
{
    int a, b, c, s, d;
    scanf("%d %d %d", &a, &b, &c);
    c = c % 10;
    if((a>5)||b<200)
        s = 0;
    else if(b<400)
    {
        switch (a)
        {
        case 1:
            s = ((c == 2) || (c == 6)) ? 1 : 0;
            break;
        case 2:
            s = ((c == 2) || (c == 7)) ? 1 : 0;         
            break;
        case 3:
            s = ((c == 3) || (c == 8)) ? 1 : 0;
            break;
        case 4:
            s = ((c == 4) || (c == 9)) ? 1 : 0;
            break;
        case 5:
            s = ((c == 5) || (c == 0)) ? 1 : 0;
            break;
            default:
            break;
        }
    }else if(b>=400)
    {
        if ((a==2)||(a==4))
            d = 2;
        else
            d = 1;
        switch (d)
        {
        case 1: switch (c)
                {
                case 1:
                    s = 1;
                    break;
                case 3:
                    s = 1;
                    break;
                case 5:
                    s = 1;
                    break;
                case 7:
                    s = 1;
                    break;
                case 9:
                    s = 1;
                    break;
                default:
                    s = 0;
                    break;
                }
            
            break;
        case 2: switch (c)
                {
                case 0:
                    s = 1;
                    break;
                case 4:
                    s = 1;
                    break;
                case 6:
                    s = 1;
                    break;
                case 8:
                    s = 1;
                    break;                                
                default:
                    s = 0;
                    break;
                }
            break;
        
        default:
            break;
        }
    }
        
    printf("%d",c);
    if(s==1)
        printf(" yes");
    else
         printf(" no");
        
return 0;
}