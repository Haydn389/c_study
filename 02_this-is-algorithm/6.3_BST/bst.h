#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    struct node* left;
    struct node* right;
    int data;
}node;


node* creat(int new_data);//새 노드 생성
void destroy_node(node* node);//노드 할당해제
void destroy_tree(node* tree);
node* search(node* tree, int target);
node* find_min(node* tree);
void insert(node* tree, node *child);
node* remove_node(node* tree, node* parent, int target);
void inorder(node *node);
