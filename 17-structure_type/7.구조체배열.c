#include <stdio.h>

struct address
{
    char name[20];
    int age;
    char tel[10];
    char addr[80];
};
void print_st(struct address *p);
int main(void){
    struct address a[5]={
        {"ȫ�浿",23,"111-111","�︪�� ����"},
        {"�̼���",53,"222-111","�︪�� ����"},
        {"�庸��",24,"333-111","�︪�� ����"},
        {"������",16,"444-111","�︪�� ����"},
        {"���߱�",27,"555-111","�︪�� ����"}
    };
    // printf("%s",a[0].name);// ���⼭ name�� �ּҰ�

    print_st(a);//�迭���� �� ��ü���ּ�

    return 0;
}

void print_st(struct address *p){
    int i;
    for (i=0; i<5;i++){
    printf("�̸� %s\n",(*(p+i)).name);
    printf("���� %d\n",(p+i)->age);//p[i]�����Ͱ� �迭���� �����ϸ� �迭ó�� �� �� �ִ�.
    printf("��ȭ %s\n",p[i].tel);
    printf("�ּ� %s\n",p[i].addr);
    // p++;

    }
}
