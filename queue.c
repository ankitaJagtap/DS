
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
int data;
struct node *next;
}node;

node *createnode(int data)
{
node *nn=malloc(sizeof(node));
nn->data=data;
nn->next=NULL;
return(nn);
}

node *Enqueue(node *start,node *nn) //inserting element at the end of the list
{
node *temp;
temp=start;

if(start==NULL)
{
start=nn;
}
else
{
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=nn;
temp=nn;
}
return(start);
}


node *Dequeue(node *start) //delete element from first
{
node *temp;
temp=start;
if(start==NULL)
{
printf("queue is empty");
}
else
{
start=start->next;
free(temp);
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
node *start=NULL,*ret,*ret1,*ret2,*ret3;
ret=createnode(10);
ret1=createnode(11);
ret2=createnode(12);
ret3=createnode(13);
start=Enqueue(start,ret);
start=Enqueue(start,ret1);
start=Enqueue(start,ret2);
start=Enqueue(start,ret3);
start=Dequeue(start);
display(start);
return 0;
}



