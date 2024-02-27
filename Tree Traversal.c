#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left,*right;
};

typedef struct node node;

node* createNode(int value)
{
    node* ptr = (node*)malloc(sizeof(node));

    ptr -> data = value;
    ptr -> left = NULL;
    ptr -> right = NULL;

    return ptr;
}

void insertLeft(node* ptr, int value)
{
    ptr -> left = createNode(value);

}

void insertRight(node* ptr, int value)
{
    ptr -> right = createNode(value);

}

void preOrder(node* ptr)
{
    if(ptr == NULL) return;

    printf("%d -> ",ptr -> data);
    preOrder(ptr -> left);
    preOrder(ptr -> right);
}

void inOrder(node* ptr)
{
    if(ptr == NULL) return;

    inOrder(ptr -> left);
    printf("%d -> ",ptr -> data);
    inOrder(ptr -> right);
}

void postOrder(node* ptr)
{
    if(ptr == NULL) return;

    postOrder(ptr -> left);
    postOrder(ptr -> right);
    printf("%d -> ",ptr -> data);
}



int main()
{
    node* root = createNode(1); //(node*)malloc(sizeof(node));
    //createNode(1);

    insertLeft(root,2);
    insertRight(root,3);

    insertLeft(root -> left,4);
    insertRight(root -> left,7);


    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");
}


