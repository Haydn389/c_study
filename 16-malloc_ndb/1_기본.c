#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *pi;
    pi=(int*)malloc(sizeof(int));
    if(pi==NULL){
        printf("할당실패\n");
        exit(1);
    }    
    *pi=100;
    printf("%d\n",*pi);
    free(pi);
    return 0;
}