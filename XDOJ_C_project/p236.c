#include <stdio.h>
#include <memory.h>
#include <string.h>

int main()
{
    char string[100000];
    scanf("%s", &string);
    printf("%d", strlen(string));
    return 0;

}