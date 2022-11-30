#include <stdio.h>
#include <string.h>
void dele(char *arr, char ch)
{
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == ch)
        {
            int flag = strlen(arr);
            for (int j = i; j < flag; j++)
            {
                arr[j] = arr[j + 1];
            }
            i--;
            
        }
        
    }
    
}
int main()
{
    char arr[50], ch;
    memset(arr, 0, sizeof(arr));
    gets(arr);
    scanf("%c", &ch);
    dele(arr, ch);
    printf("%s", arr);
    return 0;
}