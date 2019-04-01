//circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head;
void createlist(int n);
void insertion();
void displaylist(int n);
int main()
{
	int n;
	printf("\n Circular linked list....");
	printf("\n Enter the number of elements: ");
	scanf("%d", &n);
	createlist(n);
	printf("\n Displaying list... \n");
	displaylist(n);
}
void createlist(int n)
{
	int data, i=0;
	struct node *temp;
	head = (struct node*)malloc(sizeof(struct node));
	if(head==NULL)
	{
		printf("\n Empty");
	}
	else
	{
		printf("\n Enter data: ");
		scanf("%d",&data);
		head->data=data;
		head->next=NULL;
		temp=head;
	}
	for(i=2;i<=n;i++)
	{
		printf("\n Enter data: ");
		scanf("%d",&data);
		struct node *newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=data;
		newnode->next=NULL;
		temp->next=newnode;
		temp=newnode;

	}
	temp->next=head;
}
void displaylist(int n)
{
	int i;
	struct node *temp;
	if (head==NULL)
	{
		printf("\n Empty...");
	}
	else
	{
		temp=head;
		for(i=0;i<=n;i++)	
		{
			printf("%d ->", temp->data);
			temp=temp->next;
		}
	}
}
