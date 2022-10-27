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

/*1)맨 앞에 새 노드 삽입*/
ListNode* insert_first(ListNode*head,int value){
    ListNode *p=new_alloc();
    p->data=value;
    p->link=head;
    head=p;
    return head;
}
/*2)노드 pre뒤에 새 노드 삽입*/
ListNode* insert(ListNode* head,ListNode*pre,int value){
    ListNode*p=new_alloc();
    p->data=value;
    p->link=pre->link;
    pre->link=p;
    return head;
}

/*3)젤 앞 노드 삭제*/
ListNode* delet_first(ListNode *head){
    ListNode *temp;
    if (head==NULL)return NULL;
    // head=head->link; //이렇게 하면 free 를 못함
    temp =head;
    head=temp->link;
    free(temp);
    return head;
}

/*4)pre가 가리키는 노드의 다음 노드 삭제*/
ListNode* delete(ListNode *head,ListNode *pre){
    ListNode *temp;
    // pre->link=pre->link->link;//이렇게 하면 free못함
    temp=pre->link;
    pre->link=temp->link;
    free(temp);
    return head;
}

/*5) 출력하기*/
void print_list(ListNode *head){
    ListNode*p=head;
    while (p!=NULL){
        printf("%d->",p->data);
        p=p->link;
    };
    // for (ListNode*p=head; p!=NULL;p=p->link){ //이것도 가능
    //     printf("%d->",p->data);
    // };
    printf("NULL\n");
}



struct ListNode* new_alloc(void){
    return (struct ListNode*)malloc(sizeof(struct ListNode));
}
