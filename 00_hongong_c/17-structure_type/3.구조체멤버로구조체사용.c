#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile{
  char name[20]; 
  int age;
  double height;
  char *intro;
};

struct  student
{
  struct profile pf;
  int num;
  double grade;

};


int main(void){
    struct student a;
    strcpy(a.pf.name,"ȫ�浿");
    a.pf.age=17;
    a.pf.height=187.5;
    a.num=315;
    a.grade=3.5;
    printf("�̸� : %s\n",a.pf.name);
    printf("���� : %d\n",a.pf.age);
    printf("Ű : %.1lf\n",a.pf.height);
    printf("�й� : %d\n",a.num);
    printf("���� : %.1lf\n",a.grade);

    return 0;
    
}