//Binary search tree insertion and implement Traversal using inorder, preorder and postorder using recursion

#include <stdio.h>
#include <stdlib.h>

struct node { 
int item;
struct node* left; 
struct node* right;
};


void inorderTraversal(struct node* root) 
{ 
if (root == NULL) 
return;
inorderTraversal(root->left);
printf("%d ->", root->item); 
inorderTraversal(root->right);
}

void preorderTraversal(struct node* root)
{ 
if (root == NULL) 
return;
printf("%d ->", root->item); 
preorderTraversal(root->left); 
preorderTraversal(root->right);
}

void postorderTraversal(struct node* root) 
{ 
if (root == NULL)
return; 
postorderTraversal(root->left); 
postorderTraversal(root->right); 
printf("%d ->", root->item);
}

struct node* createNode(value) 
{
struct node* newNode = malloc(sizeof(struct node)); 
newNode->item = value;
newNode->left = NULL; 
newNode->right = NULL;
return newNode;
}
struct node* insertLeft(struct node* root, int value)
{ 
root->left = createNode(value);
return root->left;
}

struct node* insertRight(struct node* root, int value)
{ 
root->right = createNode(value);
return root->right;
}
int main() 
{
int a,b,c,d,e;
printf("Enter the rootnode"); 
scanf("%d",&a);
struct node* root = createNode(a); 
printf("Enter the node"); scanf("%d",&b);
insertLeft(root, b);
printf("Enter the node"); 
scanf("%d",&c);
insertRight(root, c);
printf("Enter the node");
scanf("%d",&d); insertLeft(root->left, d); 
printf("Enter the node"); 
scanf("%d",&e); 
insertRight(root->left, e);
printf("Inorder traversal \n"); 
inorderTraversal(root);
printf("\nPreorder traversal \n"); 
preorderTraversal(root);
printf("\nPostorder traversal \n"); 
postorderTraversal(root);
}
