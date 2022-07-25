#include<stdio.h>
int isPrime(int a){
    if(a<=0){
        return 0;
    }
    if(a==1||a==2){
        return 1;
    }
    for (int i = 2; i < a;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}


int main()
{
    int a;
    scanf("%d", &a);
    isPrime(a) ? printf("该数是素数\n") : printf("该数不是素数\n");

    // if(a==1||a==2){
    //     printf("该数为素数\n");
    //     return 0;
    // }
    // if(a<=0){
    //     printf("error\n");
    //     return 0;
    // }
    // for (int b=2;b<a;b++){
    //     if(a%b==0){
    //         printf("该数不是素数\n");
    //         return 0;
    //     }
    // }
    // printf("该数为素数\n");
    return 0;
}