#include "bst.h"

node* creat(int new_data)//새 노드 생성
{
    node* new_node = (node*)malloc(sizeof(node));
    new_node->left=NULL;    
    new_node->right=NULL;
    new_node->data=new_data;

    return new_node;
}

void destroy_node(node* node)//노드 할당해제
{
    free(node);
}

void destroy_tree(node* tree)
{
    if(tree->right!=NULL)
        destroy_tree(tree->right);
    if(tree->left!=NULL)
        destroy_tree(tree->left);
    tree->left=NULL;//굳이 왜한거지?
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
    if(tree->data < child->data) //삽입할 노드의 data가 현재 data보다 크면
    {
        if(tree->right==NULL)       //우측노드가 NULL이면 거기를 가리키도록
            tree->right=child;
        else                        //NULL이 아니면 우측으로 이동
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
    //target을 찾아가자
    if (tree->data > target)
        removed=remove_node(tree->left,tree,target);
    else if(tree->data < target)
        removed=remove_node(tree->right,tree,target);
    else//목표값을 찾았다!
    {
        removed =tree;
        // 1-잎노드인경우 바로삭제
        if (tree->left==NULL && tree->right==NULL)
        {
            if(parent->left==tree) //삭제할 노드가 부모노드의 왼쪽노드였다면
                parent->left==NULL;//부모노드 왼쪽을 삭제
            else
                parent->right=NULL;
        }
        else
        {
            //2-자식이 양쪽 다 있는경우
            if (tree->left!=NULL &&tree->right!=NULL)
            {
                node* min_node=find_min(tree->right);//삭제할 노드 우측에서 가장 작은 노드 찾기
                min_node=remove_node(tree,NULL,min_node->data);
                tree->data=min_node->data;
            }

            //3-자식이 한쪽만 있는경우
            else
            {
                node* temp=NULL;
                if (tree->left!=NULL)//자식이 왼쪽에 있는경우
                    temp=tree->left;
                else                   //자식이 오른쪽에 있는경우
                    temp=tree->right;
                if(parent->left==tree) //삭제할 노드가 부모노드의 왼쪽노드였다면
                    parent->left==temp;//부모노드 왼쪽을 삭제
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