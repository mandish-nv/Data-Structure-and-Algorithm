#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct stack{
	int data;
	struct stack *next;
};

typedef struct stack node;

void push (int);
void pop();
void display();

node *top = NULL;

int main(){
	
	int choice, x;
	
	do{
		printf("MENU\n1.	For push\n2.	For pop\n3.	Display");
		printf("\n4.	Exit\n\nEnter your choice: ");
		scanf("%d", &choice);
	
		switch (choice){
		case 1:
			printf("Enter data to push: ");
			scanf("%d", &x);
			push( x);
			break;
		
		case 2:
			pop();
			break;
			
		case 3:
			display();
			break;
				
		case 4:
			printf("Quitting...	press any key");
			break;	
		}
		getch();
		
	}while(choice!=4);
	
	return 0;
}

void push (int x){
	node *newnode;
	newnode= (node*)malloc(sizeof(node));
	if (newnode==NULL){
		printf("Memory non-sufficient");
		return;
	}
	newnode->data= x;
	newnode->next= top;
	top= newnode;
}

void pop(){
	int x;
	node *temp;
	if (top==NULL){
		printf ("Stack underflow\n");
		return;
	}
	printf ("popped data is %d", top->data);
	temp= top;
	top= top->next;
	free(temp);
}

void display(){
	node *temp;
	if (top==NULL){
		printf("Stack empty");
	}
	else{
		printf("Data item in stack are:\n");
		temp= top;
		while (temp!=NULL){
			printf("%d\t", temp->data);
			temp=temp->next;
		}
	}
}







