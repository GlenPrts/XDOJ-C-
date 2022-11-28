#include <stdio.h>


struct students
{
    char name[20];
    int sum;
    int class0;
    int class1;
    int class2;
    int class3;
    int class4;
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
        scanf("%d %d %d %d %d",&student[i].class0, &student[i].class1, &student[i].class2, &student[i].class3, &student[i].class4);
        scanf("%d", &student[i].addtion);
        student[i].sum = student[i].class0 + student[i].class1 + student[i].class2 + student[i].class3 + student[i].class4;
        student[i].sum += student[i].addtion;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (student[j].sum < student[j + 1].sum)
            {
                swap(&student[j], &student[j + 1]);
            }else if (student[j].sum == student[j + 1].sum)
            {
                if (student[j].addtion < student[j + 1].addtion)
                {
                    swap(&student[j], &student[j + 1]);
                }
                
            }
            
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s %d %d\n", student[i].name, student[i].sum, student[i].addtion);
    }
    
    return 0;
    
}
