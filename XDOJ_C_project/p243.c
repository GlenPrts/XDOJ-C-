#include <stdio.h>


struct students
{
    char name[20];
    int sum;
    int class[5];
    int addtion;
};

void swap(struct students *n1, struct students *n2)
{
    struct students n = *n1;
    *n1 = *n2;
    *n2 = n;
}

int main()
{
    struct students student[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &student[i].name);

        student[i].sum = 0;
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &student[i].class[j]);
            student[i].sum += student[i].class[j];
        }

        scanf("%d", &student[i].addtion);
        student[i].sum += student[i].addtion;
    }

    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (student[j].sum < student[j + 1].sum)
            {
                swap(&student[j], &student[j + 1]);
                flag = 0;
            }else if (student[j].sum == student[j + 1].sum)
            {
                if (student[j].addtion < student[j + 1].addtion)
                {
                    swap(&student[j], &student[j + 1]);
                    flag = 0;
                }
                
            }
            
            
        }
        if (flag)
        {
            break;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s %d %d\n", student[i].name, student[i].sum, student[i].addtion);
    }
    
    return 0;
    
}
