//Tower of Hanoi
#include <stdio.h>

void toh(int n, char A, char B, char C){
	if(n>0){
		toh(n-1, A, C, B);
		printf("\nMove %d disk from %c to %c", n, A, C);
		toh(n-1, B, A, C);
	}
	
	
}

int main(){
	int n;
	
	printf("Enter n: ");
	scanf("%d", &n);
	toh(n,'A','B','C');
	
	return 0;
}