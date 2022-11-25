#include <stdio.h>
#include <string.h>

int main()
{
    char S1[111], S2[111], len = 0, len1, len2;
    memset(S1, 0, sizeof(S1));
    memset(S2, 0, sizeof(S2));
    gets(S1);
    gets(S2);
    len1 = strlen(S1);
    len2 = strlen(S2);
    //大小写转换
    for (int i = 0; i < len1; i++)
    {
        if (S1[i] >= 'A' && S1[i] <= 'Z')
        {
            S1[i] += 'a' - 'A';
        }
    }
    for (int i = 0; i < len2; i++)
    {
        if (S2[i] >= 'A' && S2[i] <= 'Z')
        {
            S2[i] += 'a' - 'A';
        }
    }
    //寻找最长公共字符串
    for (int i = 0; i < len1; i++)
    {
        for (int k = 0; k < len2; k++)
        {
            if (S1[i] == S2[k])
            {
                int m = 0;
                while(S1[i + m] != '\0' || S2[k + m] != '\0')
                {
                    if (S1[i + m] != S2[k + m])
                        break;
                    m++;
                }
                if (len < m)
                    len = m;
            }
        }
    }

    //计算相似度
    double r;
    if(len1 == 0 && len2 ==0)
        r = 1;
    else
        r = 2.0 * len / (len1 + len2);
    printf("%.3lf", r);
}