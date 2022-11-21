#include <stdio.h>
int main()
{
    int n, t = 0, arr[12];
    scanf("%d", &n);


    for (t; n != 0; t++)
    {
        arr[t] = n % 10;
        n /= 10;
    }


    //回文判断
    int arrflag = 0;
    if (t & 1)
    {
        for (int i = 0; i < (t - 1) / 2; i++)
        {
            if (arr[i] = arr[t - i - 1])
            {
                arrflag++;
            }
        }
        if (arrflag == (t - 1) / 2)
            arrflag = -1;
    }else
    {
        for (int i = 0; i < t / 2; i++)
        {
            if (arr[i] == arr[t - i - 1])
            {
                arrflag++;
            }
        }
        if (arrflag == t / 2)
            arrflag = -1;
    }
    

    if (arrflag == -1)
    {
        int sum = 0;
        for (int i = 0; i < t; i++)
        {
            sum += arr[i];
        }
            printf("%d", sum);
    }else
        printf("no");
}