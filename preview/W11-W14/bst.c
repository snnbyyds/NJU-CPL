#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<assert.h>

typedef struct node
{
    struct node *left;
    struct node *right;
    char data;
} bnode;

bnode *initnode(char val);
void appendnode(bnode *newnode, bnode **proot);
void inorder(bnode *node);

int main(void){
    bnode *root = NULL;
    char array[] = "DAJSCEB";
    for (uint32_t i = 0; array[i] != '\0'; i++)
    {
        appendnode(initnode(array[i]), &root);
    }
    assert(root != NULL);
    inorder(root);
    return 0;
}

bnode *initnode(char val){
    bnode *p = malloc(sizeof(bnode));
    p->data = val;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void appendnode(bnode *newnode, bnode **node){
    if (*node == NULL)
    {
        *node = newnode;
    }
    else
    {
        if (newnode->data < (*node)->data) // Go left
        {
            printf("%c Go left\n", newnode->data);
            appendnode(newnode, &(*node)->left);
        }
        else // Go right
        {
            printf("%c Go right\n", newnode->data);
            appendnode(newnode, &(*node)->right);
        }
    }
}

void inorder(bnode *node){
    if (node != NULL)
    {
        inorder(node->left);
        printf("%c", node->data);
        inorder(node->right);
    }
}