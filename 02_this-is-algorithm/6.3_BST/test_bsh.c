#include "bst.h"


void print_result(int target,node* result)
{
    if(result!=NULL)
        printf("ã�ҽ��ϴ� : %d \n",result->data);
    else
        printf("��ã�ҽ��ϴ� : %d\n",target);
}

int main(void)
{
    node* root=creat(123);//��Ʈ���
    node* node=NULL;

    insert(root,creat(22));
    insert(root,creat(9918));
    insert(root,creat(424));
    insert(root,creat(17));
    insert(root,creat(3));
    insert(root,creat(98));
    insert(root,creat(34));
    insert(root,creat(760));
    insert(root,creat(317));
    insert(root,creat(1));

    // int search_target=17;
    // node=search(root,search_target);
    // print_result(search_target,node);

    // search_target=117;
    // node=search(root,search_target);
    // print_result(search_target,node);

    inorder(root);
    printf("\n");

    printf("98�� ����!\n");
    node=remove_node(root,NULL,98);
    destroy_node(node);
    inorder(root);
    printf("\n");

    printf("999�� ����!\n");
    node=remove_node(root,NULL,98);
    destroy_node(node);
    inorder(root);
    printf("\n");

    //�� ��� ����
    printf("111���� \n");

    insert(root, creat(111));
    inorder(root);
    printf("\n");

    destroy_node(root);
    return 0;

}