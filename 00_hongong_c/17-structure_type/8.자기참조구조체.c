#include <stdio.h>

struct list
{
    int num;
    struct list *next; //�ڱ����� ����ü
};

int main(void){
    struct list a={10},b={20},c={30};//������ �ʱ�ȭ ���ϸ� NULL�����Ͱ���
    a.next=&b;
    b.next=&c;

    printf("======���(1)======\n");
    printf("%d\n",a.num);

    printf("%d\n",(*a.next).num);
    printf("%d\n",a.next->num);//���� ����

    printf("%d\n",(*(*a.next).next).num);//*a.next==b, *b.next==c
    printf("%d\n",a.next->next->num);//���� ����

    printf("======���(2)======\n");
    
    struct list *head=&a,*current;
    current=head;
    while(current!=NULL){
    // while(current->next!=NULL){//�̷��� �ϸ� 30�� ��¾ȵ�
        printf("%d\n",current->num);
        current=current->next;
    }

    return 0;
}

