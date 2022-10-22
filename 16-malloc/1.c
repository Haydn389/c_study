#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* pi;
    double *pd;
    pi=(int*)malloc(sizeof(int));
    if (pi==NULL)
    {
        printf(">메모리가 부족합니다.\n");
        exit(1);
    }
    pd=(double*)malloc(sizeof(double));
    if (pd==NULL)
    {
        printf(">메모리가 부족합니다.\n");
        exit(1);
    }
    *pi=10;
    *pd=3.4;
    printf(">정수 입력: ");
    scanf("%d",&(*pi)); //&(*pi) 는 pi랑 동일
    printf(">실수 입력: ");
    scanf("%lf",&(*pd)); //&(*pd)는 pd랑 동일

    printf("정수형으로 사용:%d\n",*pi);
    printf("실수형으로 사용:%.1lf\n",*pd);

    free(pi);
    free(pd);
    return 0;
}