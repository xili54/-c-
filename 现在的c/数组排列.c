#include <stdio.h>

int main()
{
    printf("请输入十个整数，系统将为您从小到大排序。\n");
    int zu[10], t;
    for (int i = 0; i < 9; i++)
    {
        printf("请输入第%d个数\n", i + 1);
        scanf("%d", &zu[i]);
    }
    for (int g = 10; g > 1; g--)
    {
        for (int j = 1; j < g; j++)
        {
            if (zu[j - 1] > zu[j])
            {
                t = zu[j - 1];
                zu[j - 1] = zu[j];
                zu[j] = t;
            }
        }
    }
    printf("%d < %d < %d < %d < %d < %d < %d < %d < %d < %d\n", zu[0], zu[1], zu[2], zu[3], zu[4], zu[5], zu[6], zu[7], zu[8], zu[9]);
    return 0;
}
