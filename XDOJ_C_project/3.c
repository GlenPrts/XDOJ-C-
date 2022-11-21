#include<stdio.h>
int main()
{
    int y, m, d;
    float P, N, N1, N2, N3;
    printf("请输入产品原价\n");
    scanf("%f", &P);
    printf("请输入生产日期\n");
    scanf("%d %d %d", &y, &m, &d);
    N1 = y * 365 + m * 30 + d;
    printf("请输入保质期\n");
    scanf("%d %d %d", &y, &m, &d);
    N2 = y * 365 + m * 30 + d;
    printf("请输入当前日期\n");
    scanf("%d %d %d", &y, &m, &d);
    N3 = y * 365 + m * 30 + d;
    N = N1 + N2 - N3;
    if (N<=0)
    {
        printf("食品已过期\n");
    }else
    if (N<10)
    {
        N /= 10;
        P *= N;
        printf("%.2f", P);
    }else
        printf("%.2f", P);
    return 0;
}