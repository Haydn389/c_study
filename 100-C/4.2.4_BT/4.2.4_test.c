#include "4.2_bt.h"

int main(void){
    node* A=creat('A');
    node* B=creat('B');
    node* C=creat('C');
    node* D=creat('D');
    node* E=creat('E');
    node* F=creat('F');
    node* G=creat('G');

    A->left=B;
    B->left=C;
    B->right=D;

    A->right=E;
    E->left=F;
    E->right=G;

    printf("preorder..\n");
    preorder(A);
    printf("\n\n");
    printf("inorder..\n");
    inorder(A);
    printf("\n\n");
    printf("postorder..\n");
    postorder(A);
    printf("\n\n");
    return 0;
}