#include <stdio.h>
#include <stdlib.h>

struct Node {
	
	int data;
	struct Node* next;
};

void add_at_end (struct Node** ptr) {

	struct Node* temp = malloc (sizeof(struct Node));

	printf("Enter the data: ");
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

void print(struct Node* ptr) {
	
	while(ptr) {
	
		printf("%d ", ptr -> data);
		ptr = ptr -> next;
	}	

	printf("\n");
}

int main() {

	struct Node* head = 0;

	add_at_end(&head);
	add_at_end(&head);
	add_at_end(&head);
	add_at_end(&head);
	
	print(head);
}

