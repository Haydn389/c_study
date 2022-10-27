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
    struct student a={{"홍길동",20,170.1},315,3.5};
    // strcpy(a.pf.name,"홍길동");
    // a.pf.age=17;
    // a.pf.height=187.5;
    // a.num=315;
    // a.grade=3.5;
    struct student b;
    b=a;

    printf("이름 : %s\n",   b.pf.name);
    printf("나이 : %d\n",   b.pf.age);
    printf("키 : %.1lf\n",  b.pf.height);
    printf("학번 : %d\n",   b.num);
    printf("성적 : %.1lf\n",b.grade);

    return 0;
    
}