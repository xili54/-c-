// 1,2,3,4, 四个数字组成的不重复三位数
#include <stdio.h>
int main()
{
    int total = 0;
    // int i;
    // for (int i = 1; i < 5; i++)
    // {
    //     printf("%d\n", i);
    // }
    // printf("%d\n", i);
    // return 0;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (i == j)
                continue;
            for (int k = 1; k < 5; k++)
            {
                if (j == k || i == k)
                    continue;
                total++;
                printf("%d%d%d\n", i, j, k);
            }
        }
    }
    printf("一共可以组成%d个不重复的三位数\n", total);
    return 0;
}