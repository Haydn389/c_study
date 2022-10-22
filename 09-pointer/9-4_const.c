#include <stdio.h>

int main(void){
    int a=10,b=20;
    int *pa=&a;
    // const int *pa=&a;
    printf("a값 :%d\n",*pa);

    pa=&b;
    printf("b값 :%d\n",*pa);

    pa=&a;
    *pa=15;
    printf("a값 :%d\n",*pa);

}