// #ifndef BINARY_TREE_H
// #define BINARY_TREE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node* left;
    struct node* right;
    int data;
}node;

node* creat(int new_data);
void destroy_node(node* node);
void preorder(node* node);
void inorder(node* node);
void postorder(node* node);
void destroy_tree(node* node);

// #endif