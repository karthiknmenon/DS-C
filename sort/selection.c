// selection sort
#include<stdio.h>
#include<stdlib.h>
void display(int a[], int n);
void sort(int a[], int n);
int main()
{
	int data,i,n,*a;
	printf("\n Enter the number of elements:(default 5) ");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("\n Enter the element: ");
		scanf("%d",&data);
		a[i]=data;
	}
	display(a,n);
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
	int i,j,min,temp;
	for(i=0;i<n;i++)
	{
		int min,pos;
		min=a[i];
		for(j=0;j<n;j++)
		{
			if(a[j] < min)
			{
				pos=j;
			}
		}
		temp=a[pos];
		a[pos]=a[i];
		a[i]=temp;
	}
	printf("\n Array after sort is: ");
}