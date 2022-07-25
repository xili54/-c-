//有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子不死，问每个月的兔子总数为多少？
#include <stdio.h>
int Fib(int n)
{
    if (n <= 2 && n > 0)
    {
        return 1;
    }
    int a = 1, b = 1, c;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b, b = c;
    }
    return c;
}

int recallFib(int a)
{
    if (a <= 2 && a > 0)
    {
        return 1;
    }
    return recallFib(a - 2) + recallFib(a - 1);
}

int res[1000];
void init()
{
    res[1] = 1, res[2] = 1;
}
int dpFib(int a)
{
    if (a <= 2 && a > 0)
    {
        return 1;
    }
    else if (res[a] != 0)
        return res[a];
    return res[a] = dpFib(a - 2) + dpFib(a - 1);
}
// dpFib(5) = dpFib(3) + dpFib(4) = dpFib(1) == res[1] + dpFib(2) == res[2] + dpFib(2) + res[3]

// 汉诺塔

int main()
{
    int a1 = 1, a2 = 1, month, n;
    init();
    while (1)
    {
        scanf("%d", &month);
        printf("%d\n", dpFib(month));
    }

    if (month == 1 || month == 2)
    {
        printf("该月兔子总数为1只\n");
        return 0;
    }
    n = month / 2;
    if ((month % 2) == 1)
    {
        for (int k = 1; k < (n + 1); k++)
        {
            a1 = a1 + a2;
            a2 = a1 + a2;
        }
        month = a1;
    }
    else
    {
        for (int k = 1; k < n; k++)
        {
            a1 = a1 + a2;
            a2 = a1 + a2;
        }
        month = a2;
    }
    printf("该月兔子有%d只\n", month);
    return 0;
}