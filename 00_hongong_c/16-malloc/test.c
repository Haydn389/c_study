#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[5];
    int i;
    for (i=0;i<5;i++){
        // scanf("%d",&a[i]); //&*(a+i)
        scanf("%d",a+i); //&*(a+i)
    }
    for (i=0;i<5;i++){
        printf("%d",a[i]);
    }
    return 0;
}