#include <stdio.h>
#include <conio.h>
#define MAX 5

int rear=0, front=0;

void enqueue(int queue[]){
	if (rear == MAX){
		printf("Queue is full\n");
	}
	else{
		printf("Enter a value to add to queue: ");
		scanf("%d", &queue[rear]);
		rear++;
	}
}

void dequeue(int queue[]){
	int i;
	if (front == rear){
		printf("Queue is empty\n");
	}
	else{
		printf("Dequeue: %d\n",queue[front]);
		front++;
		
		for(i=front; i<rear ; i++){
			queue[i-1]=queue[i];
		}
		rear--;
		front--;
	}
}

void display(int queue[]){
	int i;
	for (i=front; i<rear; i++){
		printf("%d\t", queue[i]);
	}
	printf("\n");
}

int main(){
	int option;
	int queue[MAX];
	
	
	printf("Menu: \n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit \n\n");
	do{
		printf("\nEnter an option: ");
		scanf("%d",&option);
		
		switch (option){
			case 1:
				enqueue(queue);
				getch();
				break;
			
			case 2:
				dequeue(queue);
				getch();
				break;
			
			case 3:
				display(queue);
				getch();
				break;
				
			case 4:
				getch();
				break;
				
			default:
				printf("Invalid input\n");
				break;
		}

	}while(option != 4);

	return 0;
}
