//题目：输入某年某月某日，判断这是第几天
#include <stdio.h>
int m1ain()
{
    printf("年份+空格+月份+空格+日+回撤\n");
    int y1, d1, m1, sum1,y2, d2, m2, sum2;
    scanf("%d%d%d%d%d%d", &y1, &m1, &d1,&y2,&m2,&d2);
    switch (m1)
    {
    case 1:
        m1 = 0;
        break;
    case 2:
        m1 = 31;
        break;
    case 3:
        m1 = 59;
        break;
    case 4:
        m1 = 90;
        break;
    case 5:
        m1 = 120;
        break;
    case 6:
        m1 = 151;
        break;
    case 7:
        m1 = 181;
        break;
    case 8:
        m1 = 212;
        break;
    case 9:
        m1 = 243;
        break;
    case 10:
        m1 = 273;
        break;
    case 11:
        m1 = 304;
        break;
    case 12:
        m1 = 334;
        break;
    d1efault:
        printf("error");
        break;
    }
    sum1 = m1 + d1;
    if (y1 % 400 == 0 || (y1 % 4 == 0 && y1 % 100 != 0))
    {
        if (m1 > 2)
        {
            sum1++;
        }
    }
    printf("间隔天数为%d天\n", sum1);
    return 0;
}