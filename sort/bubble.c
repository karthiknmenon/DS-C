// bubble sort
#include<stdio.h>
#include<stdlib.h>
void sort(int a[], int n);
// void insert();
void display(int a[], int n);
int main()
{
	int i,n,*a;
	int item;
	printf("\n Enter the size of the array: (default 5)");
	scanf("%d",&n);
	a = (int*)malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("\n Enter element into array: ");
		scanf("%d",&item);
		a[i]=item;
	}
	display(a, n);
	sort(a,n);
	display(a,n);

}
void display(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		printf(" %d ", a[i]);
}
void sort(int a[], int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n Array after sort is: ");
}