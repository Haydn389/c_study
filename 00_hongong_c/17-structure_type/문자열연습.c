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
    printf("--hello test-- �Է��ϼ��� \n");
    char *str; //������ str�� "hello" char �迭�� ù��° ����'h'�� �ּ� ����
    str=(char *)malloc(80); //
    scanf("%s",str);//�Ҵ��� ���־�� �ּҰ� �Ҵ��
    printf("1) %p\n",str);
    printf("2) %c\n",str); //�ּҰ��̶� ��� ����
    printf("3) %c\n",*str);
    printf("4) %s\n",str);
    printf("5) %s\n",*str); //�ּҰ��� �����

	return 0;
}