//gcd of two integers
#include <stdio.h>

int gcd(int a, int b){
	if (b==0)
		return a;
	else
		return(gcd(b, a%b));
}

int main(){
	int a, b;
	
	printf("Enter two integers: \n");
	scanf("%d%d", &a, &b);
	
	printf("GCD= %d", gcd(a,b));
	return 0;
}
