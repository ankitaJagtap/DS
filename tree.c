
#include<stdio.h>
#include<stdlib.h>


typedef struct tree
{
int data;
struct tree *left;
struct tree *right;
}node;


node *createnode(int val)
{
node *nn;
nn=(node *)malloc(sizeof(node));
nn->left=NULL;
nn->right=NULL;
nn->data=val;
return(nn);
}

node *createtree(node *root,node *t1,node *t2,node *t3,node *t4,node *t5,node *t6)
{
if(root==NULL)
{
printf("error");
}
else
{
root->left=t1;
root->right=t2;
t1->left=t3;
t1->right=t4;
t2->left=t5;
t2->right=t6;
}
return(root);
}

void preorder(node *root)
{
printf("%d",root->data);
preorder(root->left);
preorder(root->right);
}


int main()
{

node *start=NULL,*root,*t1,*t2,*t3,*t4,*t5,*t6,*t7;
root=createnode(12);
t1=createnode(10);
t2=createnode(11);
t3=createnode(15);
t4=createnode(20);
t5=createnode(21);
t6=createnode(25);
start=createtree(root,t1,t2,t3,t4,t5,t6);
preorder(start);
return 0;
}



















