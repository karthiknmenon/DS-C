//insertion at the end
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;	
}*head ;
void createlist(int n);
void displaylist();
void insertion();
int main()
{
	int ch=1;
	int n;
	printf("\n Insertion at beginning");
	printf("\n Enter the number of elements");
	scanf("%d", &n);
	createlist(n);
	printf("\n Entered list is");
	displaylist();
	printf("\n Do you wish to enter element at the end of the list ? [1/0]");
	while(ch==1)
	{
		insertion();
		printf("\n Entered list is");
		displaylist();
		printf("\n Do you wish to enter element at the end of the list ? [1/0]");
		scanf("%d",&ch);
	}
}
void createlist(int n)
{
	struct node *temp;
	int data, i;	
	head = (struct node*) malloc(sizeof(struct node));
	if(head == NULL)
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
	for(i=2;i<=n;++i)
	{
		struct node *newnode = (struct node*) malloc(sizeof(struct node));
		printf("\n Enter data: ");
		scanf("%d",&data);
		newnode->data=data;
		newnode->next=NULL;
		temp->next=newnode;
		temp=newnode;

	}
}
void displaylist()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("\n Empty");
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf(" %d -> ",temp->data);
			temp=temp->next;
		}
	}
}
void insertion()
{
	int data;
	printf("\nEnter data to be entered: ");
	scanf("%d", &data);
	struct node *temp;
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	newnode->data=data;
	newnode->next=NULL;
	temp->next=newnode;
}