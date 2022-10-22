#include <stdio.h>
#include <stdlib.h>

typedef struct tfield Node;
struct tfield *talloc(void);

struct tfield{
    char name[20];
    char tel[20];
    struct tfield *pointer;
};

int main(void){
    struct tfield *head,*p,*old;
    /*���̳�����*/
    old=head=talloc(); //ó�� old�� head�� ������ ���� ����Ŵ
    // scanf("%s%s",head->name,head->tel);//ó����忡 ���Է� ���� ����(���̳��)
    while (p=talloc(),scanf("%s%s",p->name,p->tel)!=EOF){//���ο� ��� �Ҵ� �� �� �Է�
        old->pointer=p;//old�� pointer �ΰ� ���ο� ��带 ����Ű������(���� �Էµ� ���� ����)
        old=p; //old�� �ٽ� ���ο� ��带 ����Ŵ
    }
    old->pointer=NULL;//old�� ���� �������� �Էµ� ��带 ����ų ���̰�, �� ����� pointer�� NULL������Ű���� ��
    // p=head;//head�� ó������ �ڸ� �״���̹Ƿ� �̸� p�� ��� ��¿� ���
    p=head->pointer;//���̳�带 �����ϱ� ���� p�� (head�� �����ͺΰ� ����Ű�� ��)�� ����Ű���� ��
    while(p!=NULL){
        printf("%15s%15s\n",p->name,p->tel);
        p=p->pointer;
    }
 
    return 0;
}

struct tfield *talloc(void){
    return (struct tfield*)malloc(sizeof(struct tfield));
}
