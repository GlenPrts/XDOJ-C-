#include <stdio.h>
#include <string.h>
int count(char m[100][10], char n[10], int flag)
{
    int sum = 0;
    for (int i = 0; i < flag; i++)
    {
        if (strcmp(m[i], n) == 0)
        {
            sum++;
        }
        
    }
    return sum;
}
int main()
{
    int flag = 0;
    char n[10], arr[100][10];
    for (int i = 0;;i++)
    {
        scanf("%s", &arr[i]);
        flag++;
        if (getchar() == '\n')
        {
            break;
        }
           
    }
    scanf("%s", &n);
    printf("%s %d", n, count(arr, n, flag));
}