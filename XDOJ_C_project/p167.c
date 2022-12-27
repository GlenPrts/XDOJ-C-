#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
// 试着用链表来做
typedef struct node
{
    int num;
    int times;
    struct node *next;
} NUM;

NUM *list_head = NULL;

NUM *search(NUM *head, int num)
{
    while (head != 0)
    {
        if (head->num == num)
        {
            return head;
        }
        head = head->next;
    }
    return NULL;
}

NUM *add(NUM *head, int num)
{
    NUM *t_node = (NUM *)malloc(sizeof(NUM));
    if (t_node == NULL)
    {
        exit(-1);
    }
    t_node->num = num;
    t_node->times = 1;
    t_node->next = head;
    return t_node;
}

void swap(NUM *x1, NUM *x2)
{
    int num = x1->num, times = x1->times;
    x1->num = x2->num;
    x1->times = x2->times;
    x2->num = num;
    x2->times = times;
}

int main()
{
    int n, num_flag = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int tem;
        scanf("%d", &tem);
        NUM *ptr = search(list_head, tem);
        if (ptr == NULL)
        {
            list_head = add(list_head, tem);
            num_flag++;
        }
        else
        {
            ptr->times++;
        }
    }
    n = num_flag;
    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        NUM *ptr = list_head, *cur = list_head->next;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ptr->times < cur->times)
            {
                swap(ptr, cur);
            }
            else if (ptr->times == cur->times)
            {
                if (ptr->num > cur->num)
                {
                    swap(ptr, cur);
                }
            }
            ptr = ptr->next;
            cur = cur->next;
            flag = 0;
        }
        if (flag)
        {
            break;
        }
    }
    NUM *ptr = list_head;
    while (ptr != NULL)
    {
        printf("%d %d\n", ptr->num, ptr->times);
        ptr = ptr->next;
    }
    return 0;
}