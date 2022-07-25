#include <stdio.h>
void func()
{
    printf("hello");
}

int add(int a, int b)
{
    return a + b;
}

int main()
{
    // int a = 1, b = 2, c;

    // int *p = &a, *q = &b, *x=&c;
    // *x = *p;
    // *p = *q;
    // *q = *x;
    // printf("a=%d b=%d", a, b);

    // int b = 2, *a = b;
    // // *a=?, a=?
    // int c = 3;
    // a = 0;
    // // *a=?, a=?

    int c;
    func();
    void (*a)();
    a = func;
    (*a)();

    // int (*b)();
    // b = main;
    // (*b)();
    // 函数指针？ 指针函数？

    // 数组指针？ 指针数组？

    // 字符指针？

    const double ca = 0; //  double常量

    const double(*b) = &ca; // 指向double常量的指针

    const double *a = b; // 指向double的指针常量（double类型的指针常量）

    // 常量？ 常量指针？ 指针常量？

    return 0;
}