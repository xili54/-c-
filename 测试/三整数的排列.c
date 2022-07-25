#include<stdio.h>
int main()
{
    printf("请输入三个整数，中间用空格间隔开来，并回车\n");
    int x, y, z, m;
    scanf("%d%d%d", &x, &y, &z);
    if(x>y) {
        m = x;
        x = y;
        y = m;
    }
    if(x>z) {
        m = x;
        x = z;
        z = m;
    }
    if(y>z) {
        m = y;
        y = z;
        z = m;
    }
    printf("%d<%d<%d\n",x,y,z);
    return 0;
}