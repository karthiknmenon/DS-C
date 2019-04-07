// insertion sort
#include<stdio.h>
#include<stdlib.h>
void sort(int a[], int n);
void display(int a[], int n);
int main()
{
	int i,n,data,*a;
	printf("\n Enter the size of the array: ");
	scanf("%d",&n);
	a=(int*)malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("\n Enter an element: ");
		scanf("%d", &data);
		a[i]=data;
	}
	printf("\n Array before sort is: ");
	display(a,n);
	sort(a,n);
	printf("\n Array after sort is: ");
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
	int i,j,key;
	for(i=1;i<n;i++)
	{
		j=i-1;
		key=a[i];
		while(j>=0 && a[j] > key)
		{
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1]=key;
	}
}