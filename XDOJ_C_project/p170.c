#include <stdio.h>

typedef struct student
{
    char id[21];
    int class1;
    int class2;
} Student;

void swap(Student *ptr)
{
    Student t = *ptr;
    *ptr = *(ptr + 1);
    *(ptr + 1) = t;
} 

int comp(Student *ptr)
{
    int flag = 0;
    if (ptr->class1 < (ptr + 1)->class1)
    {
        flag = 1;
    }else if (ptr->class1 == (ptr + 1)->class1)
    {
        if (ptr->class2 < (ptr + 1)->class2)
        {
            flag = 1;
        }
        
    }
    return flag;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    Student stu[200];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d", &stu[i].id, &stu[i].class1, &stu[i].class2);
        fflush(stdin);
    }
    
    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (comp(&stu[j]))
            {
                swap(&stu[j]);
            }
            flag = 0;
        }
        if (flag)
        {
            break;
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        printf("%s %d %d\n", stu[i].id, stu[i].class1, stu[i].class2);
    }
    return 0;
}