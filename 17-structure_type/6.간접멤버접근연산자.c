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
    
    (*sp).kor;//��ȣ ������ ���������ڰ� �켱������ �и�
    sp->kor=90;//���� ����
    // scanf("%d",&(*sp).eng);
    printf("���������� �Է��ϼ��� :");
    scanf("%d",&sp-> eng);//���� ����
    sp->mat=sp->kor+sp->eng;
    // printf("%d\n%d\n%d\n",sp->kor,sp->eng,sp->mat);
    print_strct(&a);
    return 0;
}

void print_strct(struct score *p)
{
    printf("%d\n",p->kor);
    printf("%d\n",(*p).eng);//���� ����
    printf("%d\n",p->mat);
}

