#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    for (int a = 1; a < 100000; a++)
    {
        b = sqrt(a + 100);
        c = sqrt(a + 268);
        if (b * b == a + 100 && c * c == a + 268)
        {
            printf("%d\n", a);
        }
    }
    return 0;
}