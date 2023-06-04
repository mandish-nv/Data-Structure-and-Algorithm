//+*a-b(a-b) a=3 b=2

#include <stdio.h>
#include <string.h>

int expressionevaluate(char*);
int isoperand(char);
int isoperator(char);

int main(){
	char post[30];
	
	printf("Enter a postfix expression: ");
	scanf("%c", &post);
	
	expressionevaluate(post);
	
	return 0;
}

char expressionevaluate(char* post){
	int i=0;
	while(post!="\0"){
		isoperand(post[i]);
		isoperator(post[i]);
		
	}
	return 0;
}


