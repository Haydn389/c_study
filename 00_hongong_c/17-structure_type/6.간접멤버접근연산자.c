#include <stdio.h>

struct score
{
    int kor;
    int eng;
    int mat;
};
void print_strct(struct score *p);
int main(void){
    struct score a;
    a.kor=90;
    a.eng=80;
    a.mat=75;
    struct score *sp=&a;
    
    (*sp).kor;//괄호 없으면 참조연산자가 우선순위가 밀림
    sp->kor=90;//위랑 동일
    // scanf("%d",&(*sp).eng);
    printf("영어점수를 입력하세요 :");
    scanf("%d",&sp-> eng);//위랑 동일
    sp->mat=sp->kor+sp->eng;
    // printf("%d\n%d\n%d\n",sp->kor,sp->eng,sp->mat);
    print_strct(&a);
    return 0;
}

void print_strct(struct score *p)
{
    printf("%d\n",p->kor);
    printf("%d\n",(*p).eng);//위와 동일
    printf("%d\n",p->mat);
}

