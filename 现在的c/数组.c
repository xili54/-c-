#include <stdio.h>
int main()
{
    printf("请输入十个正整数\n");
    int a[10], max, min;
    for (int i = 0; i < 10; i++)
    {
        printf("请输入第%d个整数\n", i + 1);
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for (int i = 1; i < 10; i++)
    {
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
    }
    printf("max=%d      min=%d\n", max, min);
    return 0;
}