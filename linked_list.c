
#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
int data;
struct node *next;
}node;

node *create(int val)
{
node *nn,*start,*temp;
start=temp;
nn=(node *)malloc(sizeof(node));
nn->data=val;
nn->next=NULL;
if(start==NULL)
{
start=nn;
temp=nn;
}
else
{
temp->next=nn;
temp=nn;
}
}


void display()
{
node *start,*temp;
start=temp;
while(temp->next!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}

int main()
{
node *start;
create(5);
create(6);
display();
}


