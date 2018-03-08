#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
int data;
struct node *next;
}node;


node *push(node *start,node *nn)
{
node *temp;
temp=start;
if(start==NULL)
{
start=nn;
temp=nn;
}
else
{
nn->next=temp;
start=nn;
temp=nn;
}
return(start);
}

node *pop(node *start)
{
node *temp;
temp=start;
start=start->next;
free(temp);
return(start);
}

node *isEmpty(node *start)
{
return start;
}

node *createnode(int val)
{
node *nn;
nn=(node *)malloc(sizeof(node));
nn->data=val;
nn->next=NULL;
return(nn);
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
node *ret1,*ret2,*ret3,*start=NULL;
ret1=createnode(31);
ret2=createnode(12);
ret3=createnode(10);
start=push(start,ret1);
start=push(start,ret2);
start=push(start,ret3);
start=pop(start);
start=isEmpty(start);
display(start);
}



