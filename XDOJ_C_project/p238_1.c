#include <stdio.h>
int main()
{
    int arr[4][5];
    for (int  i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    int max, min, row, col, flag = 1;
    for (int i = 0; i < 4; i++)
    {
        //找行最大
        //假设第一个最大
        max = arr[i][0];
        //col初始化
        col = 0;
        for (int j = 0; j < 5; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                col = j;
            }
            
        }
        //找列最小
        //假设第一个最大
        min = arr[0][col];
        //row初始化
        row = 0;
        for (int j = 0; j < 4; j++)
        {
            if (min > arr[j][col])
            {
                min = arr[j][col];
                row = j;
            }
            
        }
        //鞍点判别
        if (row == i && max == min)
        {
            printf("%d %d %d", arr[row][col], row + 1, col + 1);
            flag = 0;
            break;
        }
        
    }
    if (flag)
    {
        //XDOJ 中文输出不能用 UTF-8 编码 要改为GBK编码 FUCK U XDOJ !!! 
        printf("鞍点不存在");
    }
    
    return 0;

}