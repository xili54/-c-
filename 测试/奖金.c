#include <stdio.h>
int main()
{
    int i, b = 100000;
    double s, sum = 0.1; // sΪ����iΪ����
    scanf("%d", &i);
    if (i < 0)
        printf("error\n");
    else if (i <= 100000)
    {
        s = sum * i;
        printf("Ӧ���Ž���Ϊ%.1f\n1", s);
    }
    else if (i < 200000)
    {
        s = 10000;
        printf("Ӧ���Ž���Ϊ%.1f\n", s);
    }
    else
        printf("�޽���");
    return 0;
}