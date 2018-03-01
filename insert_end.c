
#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
int data;
struct node *next;
}node;

void insert_end(node **start,int val)
{
 node *nn=(node *)malloc(sizeof(node));
 nn->data=val;
 nn->next=NULL;
 node *temp=*start;
 if(*start==NULL)
{
	*start=nn;
}
else
{
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=nn;
}
}

void display(node *temp)
{
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}

int main()
{
node *start=NULL;
insert_end(&start,6);
insert_end(&start,7);
insert_end(&start,3);
display(start);
}


#DS
