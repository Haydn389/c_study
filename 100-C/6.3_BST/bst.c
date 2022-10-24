#include "bst.h"

node* creat(int new_data)//�� ��� ����
{
    node* new_node = (node*)malloc(sizeof(node));
    new_node->left=NULL;    
    new_node->right=NULL;
    new_node->data=new_data;

    return new_node;
}

void destroy_node(node* node)//��� �Ҵ�����
{
    free(node);
}

void destroy_tree(node* tree)
{
    if(tree->right!=NULL)
        destroy_tree(tree->right);
    if(tree->left!=NULL)
        destroy_tree(tree->left);
    tree->left=NULL;//���� ���Ѱ���?
    tree->right=NULL;
    destroy_node(tree);
}

node* search(node* tree, int target)
{
    if (tree==NULL)
        return NULL;

    if (tree->data == target)
        return tree;

    else if (tree->data > target)
        return search(tree->left,target);
    else
        return search(tree->right,target);
}

node* find_min(node* tree)
{
    if(tree=NULL)
    return NULL;
    if (tree->left==NULL)
        return tree;
    else
        return find_min(tree->left);
}

void insert(node* tree, node *child)
{
    if(tree->data < child->data) //������ ����� data�� ���� data���� ũ��
    {
        if(tree->right==NULL)       //������尡 NULL�̸� �ű⸦ ����Ű����
            tree->right=child;
        else                        //NULL�� �ƴϸ� �������� �̵�
            insert(tree->right,child);
    }
    else if(tree->data > child->data)
    {
        if(tree->left==NULL)
            tree->left=child;
        else
            insert(tree->left,child);
    }
}

node* remove_node(node* tree, node* parent, int target)
{
    node* removed=NULL;
    if (tree==NULL)
        return NULL;
    //target�� ã�ư���
    if (tree->data > target)
        removed=remove_node(tree->left,tree,target);
    else if(tree->data < target)
        removed=remove_node(tree->right,tree,target);
    else//��ǥ���� ã�Ҵ�!
    {
        removed =tree;
        // 1-�ٳ���ΰ�� �ٷλ���
        if (tree->left==NULL && tree->right==NULL)
        {
            if(parent->left==tree) //������ ��尡 �θ����� ���ʳ�忴�ٸ�
                parent->left==NULL;//�θ��� ������ ����
            else
                parent->right=NULL;
        }
        else
        {
            //2-�ڽ��� ���� �� �ִ°��
            if (tree->left!=NULL &&tree->right!=NULL)
            {
                node* min_node=find_min(tree->right);//������ ��� �������� ���� ���� ��� ã��
                min_node=remove_node(tree,NULL,min_node->data);
                tree->data=min_node->data;
            }

            //3-�ڽ��� ���ʸ� �ִ°��
            else
            {
                node* temp=NULL;
                if (tree->left!=NULL)//�ڽ��� ���ʿ� �ִ°��
                    temp=tree->left;
                else                   //�ڽ��� �����ʿ� �ִ°��
                    temp=tree->right;
                if(parent->left==tree) //������ ��尡 �θ����� ���ʳ�忴�ٸ�
                    parent->left==temp;//�θ��� ������ ����
                else
                    parent->right=temp;
            }
        }
    }
    return removed;
}

void inorder(node *node)
{
    if(node==NULL)
    return;
    inorder(node->left);
    printf("%d ",node->data);
    inorder(node->right);
}