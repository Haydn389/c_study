#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode{
    int data;
    struct ListNode *link;
}ListNode;

struct ListNode* new_alloc(void);
void print_list(ListNode *head);
ListNode* delete(ListNode *head,ListNode *pre);
ListNode* delet_first(ListNode *head);
ListNode* insert(ListNode* head,ListNode*pre,int value);
ListNode* insert_first(ListNode*head,int value);


int main(void){
    struct ListNode* head=NULL;
    for (int i=0;i<5;i++){
        head=insert_first(head,i);
    }
    print_list(head);
    // for (int i=0;i<5;i++){
    //     head=delete_first(head);
    //     print_list(head);
    // }
    ListNode* pre;
    pre=head->link->link;
    head=delete(head,pre);
    print_list(head);
    head=insert(head,pre,99);
    print_list(head);
    return 0;
}

/*1)�� �տ� �� ��� ����*/
ListNode* insert_first(ListNode*head,int value){
    ListNode *p=new_alloc();
    p->data=value;
    p->link=head;
    head=p;
    return head;
}
/*2)��� pre�ڿ� �� ��� ����*/
ListNode* insert(ListNode* head,ListNode*pre,int value){
    ListNode*p=new_alloc();
    p->data=value;
    p->link=pre->link;
    pre->link=p;
    return head;
}

/*3)�� �� ��� ����*/
ListNode* delet_first(ListNode *head){
    ListNode *temp;
    if (head==NULL)return NULL;
    // head=head->link; //�̷��� �ϸ� free �� ����
    temp =head;
    head=temp->link;
    free(temp);
    return head;
}

/*4)pre�� ����Ű�� ����� ���� ��� ����*/
ListNode* delete(ListNode *head,ListNode *pre){
    ListNode *temp;
    // pre->link=pre->link->link;//�̷��� �ϸ� free����
    temp=pre->link;
    pre->link=temp->link;
    free(temp);
    return head;
}

/*5) ����ϱ�*/
void print_list(ListNode *head){
    ListNode*p=head;
    while (p!=NULL){
        printf("%d->",p->data);
        p=p->link;
    };
    // for (ListNode*p=head; p!=NULL;p=p->link){ //�̰͵� ����
    //     printf("%d->",p->data);
    // };
    printf("NULL\n");
}



struct ListNode* new_alloc(void){
    return (struct ListNode*)malloc(sizeof(struct ListNode));
}
