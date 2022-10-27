#include "4.2_bt.h"

node* creat(char new_data){
    node* new_node=(node*)malloc(sizeof(node*));
    new_node->left=NULL;
    new_node->right=NULL;
    new_node->data=new_data;
    return new_node;
}

void destroy_node(node* node){
    free(node);
}

void preorder(node* node){
    if(node==NULL)
        return;
    printf("%c",node->data);
    preorder(node->left);
    preorder(node->right);
}

void inorder(node* node){
    if(node==NULL)
        return;
    inorder(node->left);
    printf("%c",node->data);
    inorder(node->right);
}

void postorder(node* node){
    if(node==NULL)
        return;
    postorder(node->left);
    postorder(node->right);
    printf("%c",node->data);
}

void destroy_tree(node* node){
    if (node=NULL)
        return;
    destroy_tree(node->left);
    destroy_tree(node->right);
    destroy_node(node);
}

// int main(void){
//     node* A=creat('A');
//     node* B=creat('B');
//     node* C=creat('C');
//     node* D=creat('D');
//     node* E=creat('E');
//     node* F=creat('F');
//     node* G=creat('G');

//     A->left=B;
//     B->left=C;
//     B->right=D;

//     A->right=E;
//     E->left=F;
//     E->right=G;

//     printf("preorder..\n");
//     preorder(A);
//     printf("\n\n");
//     printf("inorder..\n");
//     inorder(A);
//     printf("\n\n");
//     printf("postorder..\n");
//     postorder(A);
//     printf("\n\n");

//     return 0;
// }