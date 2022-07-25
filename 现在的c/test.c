#include <stdio.h>

// days between two years; array, code with function
// jPrime
// fixme: bugs
// todo: sort
// todo: recall

int isLeapYear(int year)
{
    // biao da shi , zhi
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}
int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int daysInyear(int y, int m, int d)
{
    if (isLeapYear(y))
    {
        months[2] = 29;
    }
    else
    {
        months[2] = 28;
    }
    int days = 0;
    for (int i = 1; i < m; i++)
    {
        days += months[i];
    }
    days += d;
    return days;
}
// 两个日期间隔天数？函数式编程思想。
// 判断输入数字是否是素数，函数式编程。

int daysBetweenDate(int y1, int m1, int d1, int y2, int m2, int d2)
{
    int days = 0;
    // 默认 y2 > y1
    for (int i = y1; i < y2; i++)
    {
        days += isLeapYear(i) ? 366 : 365;
    }
    days -= daysInyear(y1, m1, d1);
    days += daysInyear(y2, m2, d2);
    return days;
}

int unsortedDaysBetweenDate(int y1, int m1, int d1, int y2, int m2, int d2)
{
    if(y1>y2){
        return daysBetweenDate(y2, m2, d2, y1, m1, d1);
    }
    else{
        return daysBetweenDate(y1, m1, d1, y2, m2, d2);
    }
}


int main()
{
    // while(1){
    //     int y, m, d;
    //     scanf("%d%d%d", &y, &m, &d);
    //     printf("%d\n", daysInyear(y, m, d));
    // }
    for (; 1;)
    {
        int y, m, d;
        scanf("%d%d%d", &y, &m, &d);
        printf("%d\n", daysInyear(y, m, d));
    }
    return 0;
}