#include <stdio.h>
#include <memory.h>
#include <string.h>
#define ROW 30
#define COL 30
int main()
{
    char arr[ROW][COL];
    // 数组初始化
    memset(arr, 0, ROW * COL);

    // 输入
    int row, col, c;
    scanf("%d %d %d", &row, &col, &c);
    fflush(stdin);

    // 划定区域
    for (int i = 1; i <= row; i++)
    {
        char temp[21];
        memset(temp, 0, 21);
        // OJ只能这样输入，单个字符输入会超时，找了2天才找出原因
        scanf("%s", temp);
        strncat(&arr[i][1], temp, strlen(temp));
    }

    int step = 0;
    row = 1;
    col = c;

    while (1)
    {
        // switch结构控制移动与输出
        switch (arr[row][col])
        {
        case 'W':
            arr[row][col] = 1;
            col--;
            step++;
            break;
        case 'N':
            arr[row][col] = 1;
            row--;
            step++;
            break;
        case 'S':
            arr[row][col] = 1;
            row++;
            step++;
            break;
        case 'E':
            arr[row][col] = 1;
            col++;
            step++;
            break;
        case 1:
            printf("loop %d", step);
            goto mark;
            break;
        case 0:
            printf("out %d", step);
            goto mark;
            break;
        default :
            break;
        }
    }
    mark:
    return 0;
}