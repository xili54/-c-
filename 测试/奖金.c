#include <stdio.h>
int main()
{
    int i, b = 100000;
    double s, sum = 0.1; // s为奖金，i为利润
    scanf("%d", &i);
    if (i < 0)
        printf("error\n");
    else if (i <= 100000)
    {
        s = sum * i;
        printf("应发放奖金为%.1f\n1", s);
    }
    else if (i < 200000)
    {
        s = 10000;
        printf("应发放奖金为%.1f\n", s);
    }
    else
        printf("无奖金");
    return 0;
}