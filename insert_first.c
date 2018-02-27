
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
int data;
struct node *next;
}node;


void insert_first(node **temp,int val)
{
node *nn;
nn=(node *)malloc(sizeof(node));
nn->data=val;
nn->next=NULL;

if(*temp==NULL)
{
*temp=nn;
}
else
{
nn->next=*temp;
*temp=nn;
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
insert_first(&start,3);
insert_first(&start,4);
insert_first(&start,5);
display(start);
return 0;
}

