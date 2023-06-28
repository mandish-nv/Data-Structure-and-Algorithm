//factorial of non-negative integer
#include <stdio.h>

int factorial(int n){
	if (n==0)
		return 1;
	else
		return n*factorial(n-1);
}

int main(){
	int n;
	
	printf("Enter a non-negative integer: ");
	scanf("%d", &n);
	
	printf("Factorial= %d",factorial(n));
	return 0;
}
