#include <stdio.h>

int main(void)
{
    int a=10, b=15,tot;
    double avg;
    int *pa,*pb;
    int *pt=&tot;
    double *pg=&avg;

    pa=&a;
    pb=&b;

    *pt=*pa+*pb;
    *pg=*pt/2.0;
    printf("값 : %d, %d\n",*pa,*pb);
    printf("합 : %d\n",*pb);
    printf("평균 : %.3lf\n",*pg);
}