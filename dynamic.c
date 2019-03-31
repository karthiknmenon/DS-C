#include<stdio.h> 
#include<stdlib.h>
int main()
{
	int* ptr; 
	int n, i, a, sum=0;
	printf("Enter number of elements (default=5)");
	scanf("%d", &n);
	ptr= (int*)malloc(n * sizeof(int));
	if (ptr == NULL)
	{
		printf("\n Memory not allocated.");
		exit(0);
	}
	else
	{
		for( i=0 ; i < n ; i++ )
		{
			printf("\n Enter the element.");
			scanf("%d", &a);
			ptr[i]= a;
		}
	}
	for( i = 0 ; i < n ; i++ )
	{
		printf("\n %d", ptr[i]);
	}
}
