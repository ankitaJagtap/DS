
#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
int data;
struct node *next;
struct node *prev;
}node;

node *createlist(node *start,int val)
{
node *temp;
temp=start;
node *nn=malloc(sizeof(node));
nn->next=NULL;
nn->prev=NULL;
nn->data=val;

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
nn->prev=temp;
temp=nn;
}
return(start);
}


node *insert_first(node *start,int val)
{
node *temp;
temp=start;
node *nn=malloc(sizeof(node));
nn->next=NULL;
nn->prev=NULL;
nn->data=val;
if(start==NULL)
{
start=nn;
}
else
{
nn->next=temp;
temp->prev=nn;
start=nn;
}
return(start);
}

node *insert_at_pos(node *start,int val,int pos)
{
int iCnt=1;
node *temp;
temp=start;
node *nn=malloc(sizeof(node));
nn->next=NULL;
nn->prev=NULL;
nn->data=val;
while(iCnt<pos-1)
{
temp=temp->next;
iCnt++;
}
nn->next=temp->next;
temp->next->prev=nn->next;
temp->next=nn;
nn->prev=temp;
temp=nn;
return(start);
}

node *delete_first(node *start)
{
node *temp;
temp=start;
start=start->next;
start->next->prev=NULL;
free(temp);
return(start);
}

node *delete_last(node *start)
{
node *temp;
temp=start;
while(temp->next->next!=NULL)
{
temp=temp->next;
}
free(temp->next);
temp->next=NULL;
return(start);
}

node *delete_at_pos(node *start,int pos)
{
node *temp;
temp=start;
int iCnt=1;
while(iCnt<pos)
{
temp=temp->next;
iCnt++;
}
temp->prev->next=temp->next;
temp->next->prev=temp->prev;
free(temp);
return(start);
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
start=createlist(start,10);
start=createlist(start,12);
start=createlist(start,14);
start=createlist(start,16);
start=insert_first(start,8);
start=insert_at_pos(start,15,4);
start=delete_first(start);
delete_at_pos(start,3);
start=delete_last(start);
display(start);
return 0;
}














