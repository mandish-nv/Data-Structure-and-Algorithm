#include <stdio.h>
#include <conio.h>
#define SIZE 5

int arr[SIZE];
int top=-1;

void push(int data){
	if (top>SIZE-1){
		printf("Stack full can't add more items\n");
	}
	else{
	top++;
	arr[top]= data;
	printf("Item is pushed to stack");
	}
	
}


void pop(){
	if(top ==-1){
		printf("Stack is empty\n");
	}
	else{
		printf("Popped item: %d \n", arr[top]);
		top--;
	}
}


void display(){
	int i;
	printf("Items in stack: \n");
	for (i=0;i<=top;i++){
		printf("%d \n", arr[i]);
	}
}

int main(){
	int option, num;
	char ch;
	
	do {
    printf("Menu: \n\n");
	printf("1. PUSH \n");
	printf("2. POP \n");
	printf("3. Display \n");

	printf("Enter an option:\t");
	scanf("%d", &option);
	
	switch(option){
		case 1:
			printf("Enter an item to push: ");
			scanf("%d", &num);
			push (num);
			break;	
		
		case 2:
			pop();
			break;
		
		case 3:
			display();	
			break;
		
		default:
			printf("Invalid choice");
			break;
	}
	fflush(stdin);
	printf("Do you want to continue? (y/n) ");
	scanf("%c", &ch);
	
	}while(ch=='y' || ch=='Y');
	
    return 0;
}


