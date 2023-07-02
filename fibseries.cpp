//fibonacci terms

#include <stdio.h>

int fib(int n){
	if (n==0)
		return 0;
	else if (n==1)
		return 1;
	else 
		return (fib(n-2)+fib(n-1));
}

int main(){
	int n, i;
	printf("Enter n: ");
	scanf("%d", &n);
	
	for (i=1;i<=n;i++)
		printf("%d\t",fib(i));
	return 0;
}
