#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int*pi;
    int i,sum=0;
    pi=(int*)malloc(5*sizeof(int));
    if (pi==NULL)
    {
        printf("메모리부족\n");
        exit(1);
    }
    printf("정수 5개 입력: ");
    for (i=0;i<5;i++){
        /*방법1*/
        scanf("%d",&pi[i]);
        sum+=pi[i];
        /*방법2*/
        // scanf("%d",pi+i);
        // sum+=*(pi+i);
        /*방법3*/
        // scanf("%d",pi);
        // sum+=*pi;
        // pi++;
    }
    printf("평균 : %.1lf\n",(sum/5.0));
    free(pi);
    return 0;
}