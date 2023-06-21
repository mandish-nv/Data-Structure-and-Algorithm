//NOTE: INCOMPLETE
//implementation of list using array
//insert, delete, traverse, modify, search
#include <stdio.h>
#include <conio.h>
#define MAX 5

struct LIST{
	int A[MAX];
	int size;
};

typedef struct LIST list;

//insert(l, data);
void insert(list *l, int data){
	if(l->size= MAX-1){
		printf("List is full\n");
	}
	else{
		l->A[(l->size)++]=data;	
	}
}

//remove(l, pos);
//traverse(l);
//modify(l, pos);
//search(l, data);


int main(){
	list l;
	int data, pos;
	int option;
	l.size=0;
	
	printf("MENU:\n1. Insert\n2. Delete\n3. Traverse\n4. Modify\n5. Search\n6. Exit\n\n");
	
	
	do{
		printf("Enter an option: ");
		scanf("%d", &option);
		switch(option){
		case 1:
			printf("Enter element to insert: ");
			scanf("%d", data);
			insert(&l, data);
			break;
		
		case 2:
			printf("Enter position of element to delete: ");
			scanf("%d", &pos);
			//remove(l, pos);
			break;
			
		case 3:
			//traverse(l);
			break;
			
		case 4:
			printf("Enter position of element to modify: ");
			scanf("%d", &pos);
			//modify(l, pos);
			break;
			
		case 5:
			printf("Enter element to search: ");
			scanf("%d", &data);
			//search(l, data);
						
		case 6:
			printf("Program exited.");
			getch();
			return 0;
			break;
			
		default:
			printf("INVALID INPUT\n");
			break;
		}
		getch();
	}while(option!=6);
	
	return 0;
}
