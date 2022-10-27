#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node_t;

int main(){
    node_t *head=NULL;
    append(&head,1);
    append(&head,2);
    append(&head,3);
    unshift(&head,4);
    unshift(&head,5);

    printf("나온숫자: %d\n",shift(&head));
    printf("나온숫자: %d\n",remove_by_index(&head,0));
    printf("나온숫자: %d\n",remove_by_index(&head,1));
    print_list(head);
    printf("나온숫자:%d\n",pop(&head));

    print_list(head);
    delete_list(&head);

}

void delete_list(node_t **ptr_head){
    node_t *current=*ptr_head;
    *ptr_head= NULL;

    while(current!=NULL){
        free(current);
        current=current->next;
    }
}

void print_list(node_t *head){
    node_t *current=head;
    while(current!=NULL){
        prinf("{%d}->",current->data);
        current=current->next;
    }
    printf("NULL");
    printf("\n");
}
//이중포인터, 단일포인터의 차이는 call by value냐 call by reference냐의 차이
void append(node_t **ptr_head, int data){//node_t **ptr_head=&head 대입하면, *ptr_head==head
    if (*ptr_head==NULL){
        *ptr_head=new_alloc();
        (*ptr_head)->data=data;
        (*ptr_head)->next=NULL;
        return;
    }

    node_t *current=*ptr_head;
    while (current->next !=NULL)
        current=current->next;
    current->next=new_alloc();
    current->next->data=data;
    current->next->next=NULL;
}

void unshift(node_t **ptr_head, int data){
    node_t *new_node;
    new_node=new_alloc();
    new_node->data=data;
    new_node->next=*ptr_head;
    *ptr_head=new_node;

}

int shift(node_t **ptr_head){
    node_t *current=*ptr_head;
    if(current=NULL)
        return -1;
    *ptr_head=current->next;
    int ret_data=current->data;
}

node_t* new_alloc(void){
    return (node_t*)malloc(sizeof(node_t));
}
