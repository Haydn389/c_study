#include "bst_1.h"

//��� Ž��
node* search(node* tree,int target){
    if (tree=NULL)
        return NULL;
    if (tree->data ==target)
        return tree;
    else if (tree->data>target)
        return search(tree->left,target);
    else 
        return search(tree->right,target);
}

//��� ����
void insert(node* tree,node* child){
    if (tree->data < child->data){//�� ��尡 ���纸�� ū���
        if (tree->right==NULL)
            tree->right=child;
        else
            insert(tree->right,child);
    }
    else if (tree->data > child->data){
        if (tree->left ==NULL)
            tree->left==child;
        else
            insert(tree->left,child);
    }
}

//��� ����
node* remove(node* tree,node* parent, int target){//������,�θ���,Ÿ��
    node* removed=NULL;

    if (tree==NULL)
        return NULL;
    if (tree->data > target)
        removed=remove(tree->left,tree,target);//�������,������(��������Ǻθ�),Ÿ��
    else if(tree->data < target)
        removed=romove(tree->right,tree,target);
    else //��ǥ�� ã�����
        removed=tree;
        //1) �� ����� ��� �ٷ� ���� �� �θ���� ����
        if (tree->left==NULL && tree->right==NULL){
            if (parent->left ==tree)//
                parent->left=NULL;
            else
                parent->right=NULL;
        }
        else{
            if (tree->left!=NULL && tree->right !=NULL)
            //2)�ڽ��� ���� �� �ִ°��
            {
                //�ּڰ� ��带 ã�� ���� �� ������ ��忡 ��ġ��Ŵ
                node* min_node=search_min(tree->right);
                min_node=remove(tree,NULL,min_node->data);
                tree->data=min_node->data;
            }
            else{
            //3)�ڽ��� �ϳ��� �ִ� ���
                node* temp=NULL;
                if(tree->left !=NULL)
                    temp=tree->left;
                else
                    temp=tree->right;
                if (parent->left==tree){}
            }
        }
}