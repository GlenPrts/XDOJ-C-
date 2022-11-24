#include <stdio.h>
#include <string.h>
int main()
{
    int max = 0, i = 0;
    char arr[10000][102], flag[30] ="***end***";
    memset(arr, 0, sizeof(arr));
    for (i = 0; ; i++)
    {
        gets(arr[i]);
        if (strcmp(arr[i], flag) == 0)
            break;
    }
    for (int k = 0; k < i; k ++)
    {
        if (strlen(arr[max]) < strlen(arr[k]))
            max = k;
    }
    printf("%d\n", strlen(arr[max]));
    printf("%s\n", arr[max]);
}
