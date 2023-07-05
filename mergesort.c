//merge sort
//CHECK

#include <stdio.h>
#include <stdlib.h>

void merge(int A[], int low, int mid, int high)
{
	int l1,l2,k,i;
	int b[high];
	
	l1=low;
	l2=mid;
	k=low;
	while(l1<mid && l2<=high)
	{
		if(A[l1]<A[l2])
		{
			if(A[l1]<A[l2])
			{
				b[k+1]=A[l1];
				l1++;
			}
			else
			{
				b[k+1]=A[l2];
				l2++;
			}
		}
	}
	while(l1<mid)
	{
		b[k++]=A[l1];
		l1++;
	}
	while(l2<high)
	{
		b[k++]=A[l2];
		l2++;
	}
	for(i=low;i<=high;i++)
	{
		A[i]=b[i];
	}
}

void mergesort(int A[], int low, int high)
{
	int mid;
	if (low<high)
	{
		mid=(low+high)/2;
		mergesort(A, low, mid);
		mergesort(A, mid+1, high);
		merge(A, low, mid+1, high);
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
	int high, i;
	int low=0;
	
	printf("Enter number of elemnets: ");
	scanf("%d", &high);
	
	int *A= (int*)malloc(high*sizeof(int));
	
	printf("Enter data:\n");
	for (i=0;i<high;i++)
	{
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}
	
	printf("Before sorting: ");
	display(A,high);
	
	mergesort(A,low,high-1);
	
	printf("\nAfter sorting: ");
	display(A,high);
	
	free(A);
	return 0;
}





