#include <stdio.h>
//void main(){
//    int a,*p;
//    p = &a;
//    printf("%d", p);
//}

//输入 x、y 两个整数，然后将其中的值大的赋值给 x，小的赋值给 y。
//void func(int x,int y){
 //   printf("x=%d  y=%d", x, y);
//}
//int main(){
 //   int a, b,*p1,*p2,x,y;
  //  scanf("%d%d", &a, &b);
 //   p1 = &a;
  //  p2 = &b;
  //  if(a>b){
  //      x = *p1;
   //     y = *p2;
   //     func();
  //  }
  //  else{
   //     x = *p2;
   //     y = *p1;
  //      func();
  //  }
  //  return 0;
//}
void main(){
    int x, y, t,*px, *py;
    for (;1;){
        scanf("%d%d", &x, &y);
    px = &x;
    py = &y;
    if(x<y){
        t = *px;
        *px = *py;
        *py = t;
        printf("x=%d   y=%d\n", x, y);
    }
    else{
        printf("x=%d   y=%d\n", x, y);}}
}