//insertion sort
#include <stdio.h>
#include <stdlib.h>

void insertionsort(int A[], int n)
{
	int i, j, temp;
	for(i=1;i<n;i++)
	{
		temp=A[i];
		j=i-1;
		while(temp<A[j]&&j>=0)
		{
			A[j+1]=A[j];
			j--;
		}
		if (j+1!=i)
			A[j+1]=temp;
	}
}

void display(int A[], int n)
{
	int i;
	for (i=0;i<n;i++)
	{
			printf("%d\t", A[i]);
	}
}


int main(){
	int n, i;
	
	printf("Enter number of elemnets: ");
	scanf("%d", &n);
	
	int *A= (int*)malloc(n*sizeof(int));
	
	printf("Enter data:\n");
	for (i=0;i<n;i++)
	{
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}
	
	printf("Before sorting: ");
	display(A,n);
	
	insertionsort(A,n);
	
	printf("\nAfter sorting: ");
	display(A,n);
	
	free(A);
	return 0;
}

