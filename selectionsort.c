//selection sort
#include <stdio.h>
#include <stdlib.h>

void selectionsort(int a[], int n){
	int i, j, si, temp;
	
	for(i=0; i<n-1; i++){
		si= i;
		for (j=i+1; j<n; j++){
			if (a[si]>a[j]){
				si=j;
			}
		}
		if(si!=i){
			temp= a[i];
			a[i]=a[si];
			a[si]=temp;
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
	selectionsort(a,n);
	for(i=0;i<n;i++){
			printf("%d\t",a[i]);	
	}
	
	free(a);
	return 0;
}
