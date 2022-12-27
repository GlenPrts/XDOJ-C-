#include <stdio.h>
#include <memory.h>

typedef struct node
{
    int id;
    int time;
} Stu;

int htime(int h_s, int m_s, int h_e, int m_e)
{
    return (h_e - h_s) * 60 + m_e - m_s;
}

void swap(Stu *ptr)
{
    Stu temp = *ptr;
    *ptr = *(ptr + 1);
    *(ptr + 1) = temp;
}

int comp(Stu *ptr)
{
    if (ptr->time < (ptr + 1)->time)
    {
        return 1;
    }else if (ptr->time == (ptr + 1)->time)
    {
        if (ptr->id > (ptr + 1)->id)
        {
            return 1;
        }
        
    }
    
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    Stu arr[100];
    memset(arr, 0, sizeof(arr));
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        int id, h_s, m_s, h_e, m_e;
        scanf("%d %d:%d %d:%d", &id, &h_s, &m_s, &h_e, &m_e);
        int m = 0;
        for (int j = 0; j < flag; j++)
        {
            if (id == arr[j].id)
            {
                arr[j].time += htime(h_s, m_s, h_e, m_e);
                m = 1;
                break;
            }
            
        }
        if (m)
        {
            continue;
        }
        

        arr[flag].id = id;
        arr[flag].time += htime(h_s, m_s, h_e, m_e);
        flag++;
    }

    for (int i = 0; i < flag; i++)
    {
        n = 1;
        for (int j = 0; j < flag - i - 1; j++)
        {
            if (comp(&arr[j]))
            {
                swap(&arr[j]);
                n = 0;
            }
            
        }
        if (n)
        {
            break;
        }
        
    }
    
    for (int i = 0; i < flag; i++)
    {
        printf("%d %d\n", arr[i].id, arr[i].time);
    }
    return 0;
}