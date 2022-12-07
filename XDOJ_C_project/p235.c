#include <stdio.h>
// 用指针数组处理
int main()
{
    char *m[12] = {"January", "February", "March", "April", "May",
                   "June", "July","August", "September",
                   "October", "November", "December"};

    int n;
    scanf("%d", &n);
    if (n > 12)
    {
        printf("wrong");
    }else
    {
        printf("%s", m[n - 1]);
    }
    return 0;
}