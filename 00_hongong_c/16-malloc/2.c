#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int*pi;
    int i,sum=0;
    pi=(int*)malloc(5*sizeof(int));
    if (pi==NULL)
    {
        printf("�޸𸮺���\n");
        exit(1);
    }
    printf("���� 5�� �Է�: ");
    for (i=0;i<5;i++){
        /*���1*/
        scanf("%d",&pi[i]);
        sum+=pi[i];
        /*���2*/
        // scanf("%d",pi+i);
        // sum+=*(pi+i);
        /*���3*/
        // scanf("%d",pi);
        // sum+=*pi;
        // pi++;
    }
    printf("��� : %.1lf\n",(sum/5.0));
    free(pi);
    return 0;
}