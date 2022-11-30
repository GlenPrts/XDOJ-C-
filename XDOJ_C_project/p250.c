/*
螺旋填数

题目描述：
创建一个m行n列的数组，将1—m*n的数字螺旋填入
方向为右下左上

输入说明：
输入正整数m和n，以空格分隔

输出说明:
输出填好的数组，数组元素之间用空格分隔，数组每行之间以换行分隔

输入示例：
4 5

输出示例：
1 2 3 4 5
14 15 16 17 6
13 20 19 18 7
12 11 10 9 8
*/
#include <stdio.h>
#define ROW 100
#define COL 100
int main()
{
    int arr[ROW][COL], m, n;
    scanf("%d %d", &m, &n);
    //数组初始化
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            arr[i][j] = 0;
        }
        
    }
    //划定判别区域
    for (int i = 1; i <= m ; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            arr[i][j] = -1;
        }
        
    }
    int row = 1, col = 0;
    char flag = 'r';
    for (int i = 1; i <= m * n; i++)
    {
        //switch结构控制字块移动
        switch (flag)
        {
        case 'r':
            col++;
            break;
        case 'l':
            col--;
            break;
        case 'u':
            row--;
            break;
        case 'd':
            row++;
            break;
        default:
            break;
        }
        arr[row][col] = i;

        //边际检测(按 右 下 左 上 依次判别)
        //右移出界 则 下移
        if (arr[row][col + 1] != -1 && arr[row + 1][col] == -1 && flag == 'r')
        {
            flag = 'd';
            continue;
        }
        //下出界 则 左移
        if (arr[row + 1][col] != -1 && arr[row][col - 1] == -1 && flag == 'd')
        {
            flag = 'l';
            continue;
        }
        //左出界 则 上移
        if (arr[row][col - 1] != -1 && arr[row - 1][col] == -1 && flag == 'l')
        {
            flag = 'u';
            continue;
        }
        //上出界 则 右移
        if (arr[row - 1][col] != -1 && arr[row][col + 1] == -1 && flag == 'u')
        {
            flag = 'r';
            continue;
        }  
        
        
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        puts("");
    }
    
    return 0;
    
}