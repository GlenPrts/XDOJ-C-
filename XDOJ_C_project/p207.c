#include <stdio.h>
#include <string.h>
void swap(char *n, char *m)
{
    char t[20];
    strcpy(t, n);
    strcpy(n, m);
    strcpy(m, t);
}
void wd_sort(char str[][20], int flag)
{
    for (int j = 0; j < flag; j++)
    {    for (int i = 0; i < flag - 1 - j; i++)
        {
            if (strcmp(str[i],str[i + 1]) > 0)
            {
                swap(str[i], str[i + 1]);
            }
            
        }
    }
    
}
int main()
{
    char str[10][20];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &str[i]);
    }
    wd_sort(str, n);
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }
    
}