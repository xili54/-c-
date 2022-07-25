//输出9*9口诀
#include <stdio.h>
int main()
{
    int i, g;
    for (i = 1; i < 10; i++)
    {
        for (g = 1; g < 10; g++)
        {
            printf("%d*%d=%-3d  ", g, i, i * g);
            if (g == i)
            {
                printf("\n");
                break;
            }
        }
    }

    return 0;
}