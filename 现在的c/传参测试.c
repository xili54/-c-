#include <stdio.h>
// void func1(int a, int b, int c);     //函数声明
// void func2(int a, int b, int *c);    //函数声明
// int func3(int a, int b);             //函数声明
// int main(){
//     int a = 1, b = 2, c = 0;                  //求a+b之和c
//     func1(a, b, c);
//     printf("func1=%d\n", c);         
//     func2(a, b, &c);
//     printf("func2=%d\n", c);
//     printf("func3=%d\n",func3(a, b));
//     return 0;
// }


void func1(int a,int b,int c){       //由于此处c为形式参数，所以该处C值的改变并不会改变主函数的C值，因此func1=o.
    c = a + b;
}
void func2(int a,int b,int* c){     //此处运用指向C的指针，获取并改变了主函数中的C，因此func2=3.
    *c = a + b;
}
int func3(int a,int b){             //return用法，返回a,b之和。
    return a + b;
}
 int main(){
    int a = 1, b = 2, c = 0;                  //求a+b之和c
    func1(a, b, c);
    printf("func1=%d\n", c);         
    func2(a, b, &c);
    printf("func2=%d\n", c);
    printf("func3=%d\n",func3(a, b));
    return 0;
}