#include <stdio.h>
float aver(float m[][4])
{
    float r = 0;
    for (int i = 0; i < 5; i++)
    {
        r += m[i][0];
    }
    return r / 5;
}
int fals(float m[][4])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        int flag = 0;
        for (int j = 0; j < 4; j++)
        {
            if (m[i][j] < 60)
            {
                flag++;
            }
        }
        if (flag > 1)
        {
            sum++;
        }
        
    }

    return sum;
    
}

int well(float m[][4])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        float s = 0;
        int flag = 0;
        for (int j = 0; j < 4; j++)
        {
            s += m[i][j];
            if (m[i][j] >= 85)
            {
                flag++;
            }
               
        }
        if (s / 4 >= 90 || flag == 4)
        {
            sum++;
        }
        
    }
    return sum;
    
}

int main()
{
    float stu[5][4];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%f", &stu[i][j]);
        }
        
    }
    printf("%.1f %d %d", aver(stu), fals(stu), well(stu));
    
}
