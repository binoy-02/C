//Binary search tree insertion using names and display the names in ascending order using inorder traversal.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
char name[20];
struct node *left, *right;
};
typedef struct node tree;
tree *root=NULL;
void insert(char e[20])
{
tree *t, *x;
if(root==NULL)
{
root= (tree*)malloc(sizeof(tree));
strcpy(root->name,e);
root->left=NULL; 
root->right=NULL;
}
else
{
t=root;
while(t != NULL)
{
x=t;
if(strcmp(t->name,e) == 0)
{
printf("/n Duplicate name"); 
return;
}
else if(strcmp(t->name,e) > 0)
{
t=t->left;
}
else
{
t=t->right;
}
}
if(strcmp(x->name,e) > 0)
{ 
x->left = (tree*)malloc(sizeof(tree)); 
strcpy(x->left->name,e);
x->left->left=NULL;
x->left->right=NULL;
}
else
{
x->right = (tree*)malloc(sizeof(tree)); 

strcpy(x->right->name,e); 
x->right->left=NULL; 
x->right->right=NULL;
}
}
}
void inorder(tree *r)
{
if(r != NULL)
{
inorder(r->left); 
printf("\t%s",r->name); 
inorder(r->right);
}
}
int main()
{
insert("apple"); 
insert("grape"); 
insert("berry"); 
insert("orange"); 
insert("banana"); 
printf("\nIn order: "); 
inorder(root);
return 0;
}
