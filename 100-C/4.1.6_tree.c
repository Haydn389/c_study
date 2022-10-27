#include <stdio.h>
#include <stdlib.h>

typedef char ElementType;
typedef struct Node{
    char data;
    struct Node* left;
    struct Node* right;
}Node;

Node *createNode(char new_data);
void clearNode(Node* Node);
void addNode(Node* parent, Node *child);
void printNode(Node* node,int depth);
Node *nalloc(void);

/*노드생성*/
Node* createNode(char new_data){
    Node* p=nalloc();
    p->left=NULL;
    p->right=NULL;
    p->data=new_data;
    return p;
}
/*할당해제*/
void clearNode(Node* Node){
    free(Node);
}

/*자식노드 연결*/
void addNode(Node* parent, Node *child){
    if (parent->left==NULL){
        parent->left=child;
    }
    else{
        Node*temp;
        temp=parent->left;
        while(temp->right!=NULL){
            temp=temp->right;
        }
        temp->right=child;
    }
}
/*트리출력*/
void printNode(Node* node,int depth){
    for (int i=0; i<depth-1;i++){
        printf("   ");
    }
    if (depth>0)
    prinf("+--");

    printf("%c\n",node->data);

    if (node->left!=NULL)
        printNode(node->left,depth+1);
    if (node->right!=NULL)
        printNode(node->right,depth);
}




/*메모리할당*/
struct Node *nalloc(void){
    return (struct Node *)malloc(sizeof(struct Node));
}