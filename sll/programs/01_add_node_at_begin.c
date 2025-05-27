#include <stdio.h>
#include <stdlib.h>

struct Node {

	int data;
	struct Node* next;
};

void add_begin(struct Node** ptr) {

	struct Node* temp = malloc (sizeof(struct Node));
	
	printf("Enter the data: ");
	scanf("%d", &temp -> data);
	
	temp -> next = *ptr;
	* ptr = temp;

}

void print(struct Node* ptr) {

	while(ptr != 0) {
		
		printf("%d ", ptr -> data);
		ptr = ptr -> next;
	}

	printf("\n");
}

int main() {

	struct Node* head = 0;
	
	add_begin(&head);	
	add_begin(&head);
	add_begin(&head);

	print(head);
	return 0;

}
