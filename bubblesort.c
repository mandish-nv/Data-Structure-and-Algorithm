//bubblesort-ascending
#include <stdio.h>
#include <stdlib.h>

void bubblesort(int a[], int n){
	int i, j, temp;
	
	for(i=0; i<n-1; i++){
		for (j=0; j<n-1-i; j++){
			if (a[j]>a[j+1]){
				temp= a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}	
	}
}

int main(){
	int n, i;
	int *a=(int*)malloc(n*sizeof(int));
	
	printf("Enter n size: ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
			printf("\nEnter data for A[%d]: ",i);
			scanf("%d", &a[i]);	
	}
	
	printf("\nBefore sorting:\n");
	for(i=0;i<n;i++){
			printf("%d\t",a[i]);	
	}
	
	printf("\nAfter sorting:\n");
	bubblesort(a,n);
	for(i=0;i<n;i++){
			printf("%d\t",a[i]);	
	}
	
	free(a);
	return 0;
}
