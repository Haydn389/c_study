#include<stdio.h>

struct student
{
    int num;        //변수선언이 아니다
    double grade;
};

int main(void){
    struct student s1;

    s1.num=0;
    s1.grade=0.0;
    scanf("%d",&s1.num);
    scanf("%lf",&s1.grade);
    printf("학번 : %d\n",s1.num);
    printf("학번 : %lf\n",s1.grade);
    return 0;
}