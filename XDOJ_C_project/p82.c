#include <stdio.h>
#include <string.h>
int main()
{
    char arr[52], sum = 0;
    gets(arr);

    int len = strlen(arr);
    if (len != 0)
    {
        sum++;
        if (len > 8)
            sum++;
        int flag = 0;
        char mflag[4];
        memset(mflag, 1, sizeof(mflag));
        for (int i = 0; i < len; i++)
        {
            if (arr[i] >= '0' && arr[i] <='9')
            {
                if (mflag[2])
                    flag++;
                mflag[2] = 0;
            }else if (arr[i] >= 'A' && arr[i] <= 'Z')
            {
                if (mflag[1])
                    flag++;
                mflag[1] = 0;
            }else if (arr[i] >= 'a' && arr[i] <= 'z')
            {
                if (mflag[0])
                    flag++;
                mflag[0] = 0;
            }else
            {
                if (mflag[3])
                    flag++;
                mflag[3] = 0;
            }

        }
        switch (flag)
        {
        case 2:
            sum++;
            break;
        case 3:
            sum += 2;
            break;
        case 4:
            sum += 3;
            break;
        default:
            break;
        }
    
    }
    printf("%d", sum);
}