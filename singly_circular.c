#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
int data;
struct node *next;
}node;


node *createlist(node *start,int val)
{
node *temp,*nn;
temp=start;
nn=(node *)malloc(sizeof(node));
nn->data=val;

if(start==NULL)
{
start=nn;
nn->next=start;
}
else
{
while(temp->next!=start)
{
temp=temp->next;
}
temp->next=nn;
nn->next=start;
temp=nn;
}
return(start);
}

node *insert_at_first(node *start,int val)
{
node *nn=malloc(sizeof(node));
node *temp=start;
nn->data=val;
if(start==NULL)
{
start=nn;
nn->next=start;
}
else
{
while(temp->next!=start)
{
temp=temp->next;
}
temp->next=nn;
nn->next=start;
start=nn;
}
}

node *insert_at_pos(node *start,int val,int pos)
{
int i=1;
node *nn=malloc(sizeof(node));
node *temp=start;
nn->data=val;
while(i<pos)
{
if(temp->next==start)
{
printf("position is not found");
}
else
{
temp=temp->next;
}
i++;
}
nn->next=temp->next;
temp->next=nn;
}


void display(node *start)
{
node *temp;
temp=start;
while(temp->next!=start)
{
printf("%d",temp->data);
temp=temp->next;
}
printf("%d",temp->data);
}


int main()
{
node *start=NULL;
start=createlist(start,10);
start=createlist(start,11);
start=createlist(start,12);
start=insert_at_first(start,8);
start=insert_at_pos(start,4,3);
display(start);
return 0;
}













