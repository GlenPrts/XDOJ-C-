#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#define Date char
// 题目分析
/*
由题，可构造3^(n-1)个表达式 即最多6561种可能
求结果为0的表达式的数量
即要构建n-1层循环   用递归

要优先考虑特殊构造
即使用' '构造表达式

因为1+2+3+...+n= (n+1)*n/2 = sum 
sum(max) = 45
则用' '组成的最大数一定不超过sum
由sum的位数与大小即可判断' '使用的次数
则' '最多在3 4之间
*/
// 想用DFS卡了3天了！！！  终于做出来了！

// dfs(深度优先搜索)学习
int max, res = 0;
char *flag = NULL;

// 定义bool类型
typedef enum
{
    false = 0,
    ture = 1
} bool;

// 定义结点结构体，用单向链表表示栈
typedef struct node
{
    Date date;
    struct node *next;
} Node;

// 定义栈的结构体
typedef struct stack
{
    Node *top;
    int count;
} Stack;

// 栈的创建
Stack *Creat()
{
    Stack *p;
    p = (Stack *)malloc(sizeof(Stack));
    if (p == NULL)
    {
        printf("Creat error");
        exit(0);
    }
    p->count = 0;
    p->top = NULL;
    return p;
}

// 判断栈是否为空
bool isEmpty(Stack *p)
{
    if (p->count == 0)
    {
        return ture;
    }
    else
    {
        return false;
    }
}

// 入栈
Stack *Push(Stack *p, Date value)
{
    Node *temp;
    temp = (Node *)malloc(sizeof(Node));
    if (temp == NULL)
    {
        printf("Push error");
        exit(0);
    }
    temp->date = value;
    temp->next = p->top;
    p->top = temp;
    p->count++;
    return p;
}

// 出栈
Stack *Pop(Stack *p)
{
    if (isEmpty(p))
    {
        printf("Empty stack");
        exit(0);
    }
    Node *temp = NULL;
    temp = p->top;
    p->top = p->top->next;
    p->count--;
    free(temp);
    return p;
}

int add(int n, char m)
{
    if (m == 1)
    {
        return n;
    }
    else
    {
        return -n;
    }
    
}

int fun(int x, int n)
{
    int y = 0;
    for (int i = 0; i <= n; i++)
    {
        y = y * 10 + x;
        x++;
    }
    return y;
}
// 判断函数
void judge()
{
    int sum = 0;
    char head;
    char times;
    // 优先处理特殊情况
    for (int i = 0; i < max; i++)
    {
        if (flag[i] == 3)
        {
            head = i;
            times = 0;
            while (flag[i] == 3)
            {
                times++;
                i++;
            }
            i--;
            sum += add(fun(head, times),flag[head - 1]);
        }
        if (flag[i + 1] != 3 && flag[i] != 3)
        {
            sum += add(i + 1, flag[i]);
        }
    }
    
    if (sum == 0)
    {
        res++;
    }
    
}

// DFS主体
void dfs(int max)
{

    Stack *p = Creat();
    // 放入第一个元素（标志元素）
    p = Push(p, 1);
    // 创建访问图表，表示访问状态
    bool **visited;
    visited = (bool**)malloc((max + 1) * sizeof(bool*));
    for (int i = 0; i < max + 1; i++)
    {
        visited[i] = (bool*)malloc(3 * sizeof(bool));
    }
    // 访问状态初始化
    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            visited[i][j] = false;
        }
    }
    // 开始爆搜
    while (p->count != 0)
    {
        if (p->count == max)
        {
            // 将找到的数存入flag数组
            Node *temp = p->top;
            for (int i = max - 1; i >= 0; i--)
            {
                flag[i] = temp->date;
                // printf("%d", flag[i]);
                temp = temp->next;
            }
            // 调用judge函数验证该组合是否满足题目要求
            // puts("");
            judge();
            // 返回上一级
            p = Pop(p);
        }

        // 访问状态判断
        int m_flag = 1;
        for (int i = 0; i < 3; i++)
        {
            if (visited[p->count][i] == false)
            {
                visited[p->count][i] = ture;
                p = Push(p,i + 1);
                m_flag = 0;
                break;
            }
            
        }
        if (m_flag)
        {
            // 回到上一级要重置下一级的访问状态
            for (int i = 0; i < 3; i++)
            {
                visited[p->count][i] = false;
            }
            // 返回上一级
            p = Pop(p);
        }
        
    }

    // 回收内存
    for (int i = 0; i < max + 1; i++)
    {
        free(visited[i]);
    }
    free(visited);
}

int main()
{
    scanf("%d", &max);
    flag = (char*)malloc((max + 4) * sizeof(char));
    memset(flag, 0, (max + 4) * sizeof(char));
    dfs(max);
    printf("%d", res);
    return 0;
}