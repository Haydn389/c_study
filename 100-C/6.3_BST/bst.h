#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    struct node* left;
    struct node* right;
    int data;
}node;


node* creat(int new_data);//�� ��� ����
void destroy_node(node* node);//��� �Ҵ�����
void destroy_tree(node* tree);
node* search(node* tree, int target);
node* find_min(node* tree);
void insert(node* tree, node *child);
node* remove_node(node* tree, node* parent, int target);
void inorder(node *node);
