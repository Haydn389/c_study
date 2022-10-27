#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct Node{
    int data;
    struct Node *link;
}Node; //Typedefine

Node *creat(int new_data);
void clear(Node* node);

struct Node* new_alloc(void);

//노드생성
Node *creat(int new_data){
    Node *new_node=new_alloc();
    new_node->data=new_data;
    new_node->link=NULL;
    return new_node;
}
//노드삭제
void clear(Node* node){
    free(node);
}

//노드추가
void append(Node** head,Node* new_node){
    if((*head)==NULL){
        *head=new_node;
    }
    else{
        Node* tail=*head;
        while (tail->link!=NULL){
            tail=tail->link;
        }
        tail->link=new_node; 
    }
}
//노드탐색
Node* get(Node*head, int location){
    Node* current=head;
    while(current!=NULL && (--location)>=0){
        current=current->link;
    }
    return current;
}

void remove(Node **head,Node* remove){
    if(*head==remove){
        *head=remove->link;
    }
    else{
        Node* current=*head;
        while(current!=NULL && current->link !=remove){
            current=current->link;
        }
        
    }
}

struct Node* new_alloc(void){
    return (Node*)malloc(sizeof(Node));
}