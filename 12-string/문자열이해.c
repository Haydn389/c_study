#include <stdio.h>

int main(void){
    char *fruit="apple";
    printf("���� ������ %s�Դϴ�.\n",fruit);

    int i;
    for (i=0;i<5;i++){
        printf("%c\n",*(fruit+i));
        // printf("%c\n",fruit[i]);
    }
    
    //%s�� ���� ������
    while(*fruit !='\0'){
        putchar(*fruit);
        fruit++;
    }
    return 0;
}