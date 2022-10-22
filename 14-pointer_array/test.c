#include <stdio.h>

int main(void)
{
    int a[5]={1,2,3,4,5};
    char b[10]="hello"; 
    int i;

    for (i=0; i<5; i++){
    printf("%d ",a[i]);
    }
    printf("\n%s",b);
	return 0;
}
