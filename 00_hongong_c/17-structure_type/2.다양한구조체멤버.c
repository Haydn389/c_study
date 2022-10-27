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
    // a.name="안녕하세요"  //불가능: a.name은 주소값이기 때문
    printf(">>>이름입력 : ");
    scanf("%s",a.name); //가능
    // strcpy(a.name,"홍길동"); //가능
    a.age=17;
    a.height=170.0;
    // a.intro="hello";  //사실 a.intro는 포인터이기 때문에 문자열 자체를 입력을 받거나 복사하는것은 불가능
    printf(">>>자기소개 : ");
    a.intro=(char *)malloc(80);
    scanf("%s",a.intro);

    printf("이름 : %s\n",a.name);
    printf("나이 : %d\n",a.age);
    printf("키 : %.1lf\n",a.height);
    printf("자기소개 : %s\n",a.intro);
    return 0;
    
}