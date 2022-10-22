#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    int a[5]={1,2,3,4,5};
    char str1[10]="abcde";
    char str2[10]="xyzxy";
    // *(str1+1)="b";
    // printf("%s",str1);
    int i;
    // str1[1]='x';
    // for (i=0;i<5;i++){
    //     str1[i]=str2[i];
    //     // printf("%c",str1[i]);
    // }
    // for (i=0;i<5;i++){
    //     // printf("%d",a[i]);
    //     printf("%c",str1[i]);
    // }
    strcpy(str1,str2);
    printf("%s\n",str1);
    printf("--hello test-- 입력하세요 \n");
    char *str; //포인터 str에 "hello" char 배열의 첫번째 원소'h'의 주소 저장
    str=(char *)malloc(80); //
    scanf("%s",str);//할당을 해주어야 주소가 할당됨
    printf("1) %p\n",str);
    printf("2) %c\n",str); //주소값이라 출력 못함
    printf("3) %c\n",*str);
    printf("4) %s\n",str);
    printf("5) %s\n",*str); //주소값만 출력함

	return 0;
}