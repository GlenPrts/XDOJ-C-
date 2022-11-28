#include <stdio.h>
struct times 
{
    int year;
    int month;
    int day;
};

int main()
{
    struct times n;
    scanf("%d,%d,%d", &n.year, &n.month, &n.day);
    int days = 0;
    for (int i = 1; i < n.month; i++)
    { 
        switch (i)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days += 31;
            break;
        case 2:
            if (n.year % 4 == 0 && n.year % 100 != 0)
            {
                days += 29;
            }else
            {
                days += 28;
            }
            break;
        case 4: case 6: case 9: case 11:
            days += 30;            
            break;
        default:
            break;
        }
    
    }
    days += n.day;
    printf("%d", days);
}