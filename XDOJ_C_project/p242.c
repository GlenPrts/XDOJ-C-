#include <stdio.h>
#include <string.h>
struct students 
{
    int id;
    char name[12];
    float class1;
    float class2;
    float class3;
    float average;
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
        scanf("%d", &student[i].id);
        scanf("%s", &student[i].name);
        scanf("%f %f %f", &student[i].class1, &student[i].class2, &student[i].class3);
        student[i].average = (student[i].class1 + student[i].class2 + student[i].class3) / 3;
    }


    
    for (int i = 0; i < n; i++)
    {
        int nflag = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            float s1 = student[j].average, s2 = student[j + 1].average;
            if (s1 < s2)
            {
                swap(&student[j], &student[j + 1]);
                nflag = 0;
            }else if (s1 == s2)
            {
                if (student[j].id > student[j + 1].id)
                {
                    swap(&student[j], &student[j + 1]);
                    nflag = 0;
                }
                
            }
            
        }
        
        if (nflag)
        {
            break;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d %s %.1f\n", student[i].id, student[i].name, student[i].average);
    }
    
    return 0;
}