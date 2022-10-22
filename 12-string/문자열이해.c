#include <stdio.h>

int main(void){
    char *fruit="apple";
    printf("오늘 과일은 %s입니다.\n",fruit);

    int i;
    for (i=0;i<5;i++){
        printf("%c\n",*(fruit+i));
        // printf("%c\n",fruit[i]);
    }
    
    //%s의 실제 수행방식
    while(*fruit !='\0'){
        putchar(*fruit);
        fruit++;
    }
    return 0;
}