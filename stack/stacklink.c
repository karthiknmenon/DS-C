//stacks
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
}*top=NULL;
void push();
void pop();
void display();
int main()
{
	int ch;
	int op;
	printf("\n stack....");
	printf("\n Enter choice [2/3]");
	scanf("%d", &ch);
	while(ch == 2)
	{
		printf("\n Push/Pop [1/0]");
		scanf("%d",&op);
		if(op == 1)
			push();
		else
			pop();
		printf("\n Enter choice [2/3]");
		scanf("%d",&ch);
	}
}
void push()
{
	int data;
	printf("\nEnter data: ");
	scanf("%d",&data);
	struct node* newnode = (struct node*)malloc(sizeof(newnode));
	newnode->data = data;
	newnode->next = top ;
	top = newnode;
	display();
}
void pop()
{
	if(top == NULL)
	{
		printf("\n UNDERFLOW");
	}
	printf("\n Popping data : %d", top->data);
	top =  top->next;
	display();
}
void display()
{
	struct node* ptr;
	ptr= top;
	while(ptr!=NULL)
	{
		printf("\n Elements in stack are: %d", ptr->data);
		ptr = ptr->next;
	}
}