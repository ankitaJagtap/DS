
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
int data;
struct node *next;
}node;

node *create(node *start)
{
node *nn,*temp;
temp=start;
int i,n;
for(i=0;i<3;i++)
{
nn=(node *)malloc(sizeof(node));
nn->next=NULL;
printf("enter the data:");
scanf("%d",&nn->data);
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
return(start);
}

void display(node *start)
{
node *temp;
temp=start;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}

int main()
{
node *start=NULL;
start=create(start);
display(start);
return 0;
}











