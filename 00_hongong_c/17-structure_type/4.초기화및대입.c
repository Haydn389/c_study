#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile{
  char name[20]; 
  int age;
  double height;
};

struct  student
{
  struct profile pf;
  int num;
  double grade;

};

int main(void){
    struct student a={{"ȫ�浿",20,170.1},315,3.5};
    // strcpy(a.pf.name,"ȫ�浿");
    // a.pf.age=17;
    // a.pf.height=187.5;
    // a.num=315;
    // a.grade=3.5;
    struct student b;
    b=a;

    printf("�̸� : %s\n",   b.pf.name);
    printf("���� : %d\n",   b.pf.age);
    printf("Ű : %.1lf\n",  b.pf.height);
    printf("�й� : %d\n",   b.num);
    printf("���� : %.1lf\n",b.grade);

    return 0;
    
}