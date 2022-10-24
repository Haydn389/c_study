#include "bst_1.h"

//노드 탐색
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

//노드 삽입
void insert(node* tree,node* child){
    if (tree->data < child->data){//새 노드가 현재보다 큰경우
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

//노드 삭제
node* remove(node* tree,node* parent, int target){//현재노드,부모노드,타겟
    node* removed=NULL;

    if (tree==NULL)
        return NULL;
    if (tree->data > target)
        removed=remove(tree->left,tree,target);//다음노드,현재노드(다음노드의부모),타겟
    else if(tree->data < target)
        removed=romove(tree->right,tree,target);
    else //목표값 찾은경우
        removed=tree;
        //1) 잎 노드인 경우 바로 삭제 후 부모노드와 연결
        if (tree->left==NULL && tree->right==NULL){
            if (parent->left ==tree)//
                parent->left=NULL;
            else
                parent->right=NULL;
        }
        else{
            if (tree->left!=NULL && tree->right !=NULL)
            //2)자식이 양쪽 다 있는경우
            {
                //최솟값 노드를 찾아 제거 후 현재의 노드에 위치시킴
                node* min_node=search_min(tree->right);
                min_node=remove(tree,NULL,min_node->data);
                tree->data=min_node->data;
            }
            else{
            //3)자식이 하나만 있는 경우
                node* temp=NULL;
                if(tree->left !=NULL)
                    temp=tree->left;
                else
                    temp=tree->right;
                if (parent->left==tree){}
            }
        }
}