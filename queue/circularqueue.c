// cirucular queue using linked list
#include<stdio.h>
#include<stdlib.h>
int a=0;
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
	printf("\n cirucular queue.....");
	printf("\n Continue or Exit [2/3]");
	scanf("%d", &ch);
	while(ch == 2)
	{
		printf("\n enque or deque [1/0]");
		scanf("%d",&op);
		if(op == 1)
			enque();
		else
			deque();
	}
	printf("\n Continue or Exit [2/3]");
	scanf("%d", &ch);
}
void enque()
{
	int data;
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	if(front == NULL)
	{
		printf("\n Enter data: ");
		scanf("%d",&data);
		newnode->data=data;
		front=rear=newnode;
		rear->next=front; 
	}
	else
	{
		printf("\n Enter data: ");
		scanf("%d",&data);
		newnode->data=data;
		rear->next=newnode;
		rear=newnode;
		rear->next=front;
	}
	display();
}

void deque()
{
	struct node* ptr;
	if(front == NULL)
	{
		printf("\n Empty...");
	}
	else
	{
		printf("\n Element deque-d is: %d", front->data);
		ptr=front;
		front=front->next;
	}
	display();
}
void display()
{
	struct node* ptr;
	struct node* temp; 
	temp=front;
	ptr=front;
	while(temp->next!= ptr)
	{
		printf("\n Element in queue: %d", temp->data);
		temp=temp->next;
	}

}
