
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
int data;
struct node *next;
}node;

void insert(node *start,int val)
{
node *nn=(node *)malloc(sizeof(node));
node *temp=*start;
nn->data=val;
nn->next=NULL;

if(*start==NULL)
{
*start=nn;
return;
}
else
{
while(temp->next !=NULL)
{
temp=temp->next;
}
temp->next=nn;
return;
}
}

void display(node *temp)
{
while(temp!=NULL)
{
printf("%d-->",temp->data);
temp=temp->next;

}

int main()
{
node *start=NULL;
insert(&start,5);
insert(&start,6);
insert(&start,7);
display(start);
return 0;
}


















