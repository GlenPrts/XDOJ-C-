#include <stdio.h>
void fun(int t)
{
    if (t < 0)
    {
        printf("-");
        t = -t;
    }
    if (t == 0)
    {
        return;
    }        
    char s;
    s = t % 10 + 48;
    t /= 10;
    fun(t);
    printf("%c", s);
}
int main()
{
    int t;
    scanf("%d", &t);
    fun(t);
    return 0;
}