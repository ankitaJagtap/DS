
#include<stdio.h>
#include<stdlib.h>

typedef struct treenode
{
int data;
struct node *left;
struct node *right;
}node;


node *createnode(int data)
{
node *nn=malloc(sizeof(node));
nn->left=NULL;
nn->right=NULL;
nn->data=data;
return nn;
}

void postorder (node *root)
{

postorder(root->left);
postorder(root->right);
printf("%d",root->data);

}



int main()
{

node *root=NULL,*node1,*node2,*node3,*node4,*node5,*node6,*node7;
root  = createnode( 23 );
node1 = createnode( 12 );
node2 = createnode( 10 );
node3 = createnode( 11 );
node4 = createnode( 13 );
node5 = createnode( 15 );
node6 = createnode( 17 );
node7 = createnode( 7 );

root->left = node1;
root->right = node2;

node1->left=node3;
node1->right=node4;

node2->left=node5;
node2->right=node6;

node3->left=node7;

postorder(root);
return 0;
}










