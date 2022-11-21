#include <stdio.h>
void swap(int *a, int *b)
{
    int d = *a;
    *a = *b;
    *b = d;
}
int main()
{
    int m[4] = {};
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &m[i]);
    }
    for (int j = 0; j < 4; j++)
    {
    for (int i = 0; i <4; i++)
    {
        if (m[i] > m[i +1])
        {
            swap(&m[i], &m[i + 1]);
        }
        
    }
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", m[i]);
    }
    return 0;
}