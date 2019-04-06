// queue using linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
}*front=NULL, *rear=NULL;
void enque();
void deque();
void display();
int main()
{
	int op, ch;
	printf("\n Queue ... ");
	printf("\n Choose an option [2/3]");
	scanf("%d",&ch);
	while(ch == 2)
	{
		printf("\n Enqueue or Dequeue [1/0]");
		scanf("%d",&op);
		if(op == 1)
			enque();
		else
			deque();
		printf("\n Choose an option [2/3]");
		scanf("%d",&ch);
	}
}
void enque()
{
	int data;
	struct node* newnode = (struct node*)malloc(sizeof(newnode));
	if(front==NULL)
	{
		printf("\n Enter data:");
		scanf("%d",&data);
		newnode->data=data;
		front=rear=newnode;
		rear->next=NULL;
	}
	else
	{
		printf("\n Enter data:");
		scanf("%d",&data);
		newnode->data=data;
		rear->next=newnode;
		rear=newnode;
	}
	display();
}
void deque()
{
	if(front == NULL)
		printf("\n Empty...");
	else
	{
		printf("\n Data being dequeue-d is: %d", front->data);
		front=front->next;
	}
	display();
}
void display()
{
	struct node* ptr;
	ptr=front;
	while(ptr!=NULL)
	{
		printf("\n Queue element: %d", ptr->data);
		ptr=ptr->next;
	}
}