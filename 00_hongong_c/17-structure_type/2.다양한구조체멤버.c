#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
  char name[20];  
  int age;
  double height;
  char *intro; 
};

int main(void){
    struct student a;
    // a.name="�ȳ��ϼ���"  //�Ұ���: a.name�� �ּҰ��̱� ����
    printf(">>>�̸��Է� : ");
    scanf("%s",a.name); //����
    // strcpy(a.name,"ȫ�浿"); //����
    a.age=17;
    a.height=170.0;
    // a.intro="hello";  //��� a.intro�� �������̱� ������ ���ڿ� ��ü�� �Է��� �ްų� �����ϴ°��� �Ұ���
    printf(">>>�ڱ�Ұ� : ");
    a.intro=(char *)malloc(80);
    scanf("%s",a.intro);

    printf("�̸� : %s\n",a.name);
    printf("���� : %d\n",a.age);
    printf("Ű : %.1lf\n",a.height);
    printf("�ڱ�Ұ� : %s\n",a.intro);
    return 0;
    
}