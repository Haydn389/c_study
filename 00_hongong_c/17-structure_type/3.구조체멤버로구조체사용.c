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
    strcpy(a.pf.name,"홍길동");
    a.pf.age=17;
    a.pf.height=187.5;
    a.num=315;
    a.grade=3.5;
    printf("이름 : %s\n",a.pf.name);
    printf("나이 : %d\n",a.pf.age);
    printf("키 : %.1lf\n",a.pf.height);
    printf("학번 : %d\n",a.num);
    printf("성적 : %.1lf\n",a.grade);

    return 0;
    
}