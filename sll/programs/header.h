#include <stdio.h>
#include <stdlib.h>

struct Node {

	int data;
	struct Node* next;
};

struct Node* head = 0;

void add_at_begin(struct Node** ptr) {

	struct Node* temp = malloc (sizeof(struct Node));
	printf("Enter the data: ");
	scanf("%d", &temp -> data);
	temp -> next = *ptr;
	*ptr = temp;
}

void add_at_end(struct Node** ptr) {

	struct Node* temp = malloc (sizeof(struct Node));
	printf("Enter the data : ");
	scanf("%d", &temp -> data);
	temp -> next = 0;

	if (*ptr == 0) {
	
	 	*ptr = temp;
		return;
	}

	struct Node* last = *ptr;

	while (last -> next != 0) {
	
		last = last -> next;
	}
	
	last -> next = temp;
}


void print_node(struct Node* ptr) {

	if (ptr == 0) {
	
		printf("No Nodes\n");
		return;
	}

	while (ptr) {
	
		printf("%d ", ptr -> data);
		ptr = ptr -> next;
	}
	
	printf("\n");
}
