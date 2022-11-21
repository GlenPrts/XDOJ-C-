#include <stdio.h>
int main ()
{
    int y, d, m, s = 0, H[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 30},H1[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 30};
    scanf("%d %d", &y, &d);
if ( (y % 400 == 0)||(y % 4 == 0 && y % 100 != 0))
    {
        for (int i = 0; ; i++)
        {
            s += H[i];
            if (s >= d)
            {
                m = i +1;
                s -= H[i];
                break;
            }
            
        }
        
    }else
    {
     for (int i = 0; ; i++)
        {
            s += H1[i];
            if (s >= d)
            {
                m = i +1;
                s -= H1[i];
                break;
            }
            
        }
    }
    d -= s;
    printf("%d %d", m, d);
}