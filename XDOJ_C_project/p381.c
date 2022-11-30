/*
题目：小中大
描述： 
在数据分析中最小值，最大值和中位数是常用的统计信息。中位数是指一组有序
数列中最中间的那个数，当数列个数为奇数时，取最中间那个数的值；当数列个
数为偶数时，取中间两个数的平均值。
给出 n 个有序偶数（升序或降序），依次输出其最大值、中位数和最小值。
输入：
输入为两行，第一行为一个整数 n，表示数列有 n 个整数（n<105）；
第二行为 n 个有序偶数
输出： 
依次输出数列最大值、中位数和最小值，用空格分隔
输入样例： 
样例 1：
3
-2 0 4
样例 2：
4
8 6 2 0
输出样例： 
样例 1：
4 0 -2
样例 2:
8 4 0
*/

#include <stdio.h>
int main()
{
    int arr[1000], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[n - 1];
    if (max < min)
    {
        int t = max;
        max = min;
        min = t;
    }
    int res = 0;
    if (n & 1)
    {
        n = (n - 1) / 2;
        res = arr[n];
    }else
    {
        n /= 2;
        res = (arr[n] + arr[n - 1]) / 2;
    }
    printf("%d %d %d", max, res, min);
    return 0;
}