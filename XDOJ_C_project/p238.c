#include <stdio.h>
int main()
{
    int m[4][5], row = 0, col = 0;
    int sum = 1;
    //数据输入
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &m[i][j]);
        }
        
    }

    for (int i = 0; i < 4; i++)
    {
        //找出行中最大的数
        int max = m[i][0];
        for (int j = 0; j < 5; j++)
        {
            
            if (max < m[i][j])
            {
                max = m[i][j];
                col = j;
                row = i;
            }
            
        }
        //检测唯一性
/*        int flag = 0;
        for (int j = 0; j < 5; j++)
        {
            if (max == m[i][j])
            {
                flag++;
            }
            
        }
        if (flag != 1)
        {
            continue;
        }
*/       
        //假设是鞍点
        int min = max;
        for (int k = 0; k < 4; k++)
        {
            if (min > m[k][col])
            {
                min = m[k][col];
            }
            
        }

        //检测唯一性
/*      flag = 0;
        for (int k = 0; k < 4; k++)
        {
            if (min == m[k][col])
            {
                flag++;
            }
            
        }
        if (flag != 1)
        {
            continue;
        }
*/        
        if (min == max)
        {
            sum = 0;
            printf("%d %d %d", m[row][col], row + 1, col + 1);
        }
        
        
    }
    if (sum)
    {
        //中文输出不用UTF-8 !!!
        printf("鞍点不存在");
    }
    return 0;
    
}