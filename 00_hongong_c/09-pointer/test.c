#include <stdio.h>

int main(void)
{

    /*한번에 이해하기*/
    int a=10;
    int b=20;
    int c=0;
    int *pa=&a; //642044
    int *pb=&b; //642044
    *&a=30;
    *&b=a;
    c=*&a+*&b;
    // printf("a : %d\n",a);
    // printf("a : %d\n",&a);
    // *&a=30;
    printf("c : %d\n",c);

    return 0;
}