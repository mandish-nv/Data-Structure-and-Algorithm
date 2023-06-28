//n terms of fibonacci series
#include <stdio.h>

int fib(int n){
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return (fib(n-1)+fib(n-2));
	
	
}

int main(){
	int n;
	
	printf("Enter n term of fibonacci series: ");
	scanf("%d", &n);
	
	printf("The %d term in fibonacci series is %d", n,fib(n));
	return 0;
}