#include "header.h"

void reverse_print(struct Node* ptr) {
	
	if (ptr == 0) 
		return;

	reverse_print(ptr -> next);
	printf("%d ", ptr -> data);

}

int main() {
	
	add_at_end(&head);
	add_at_end(&head);
	add_at_end(&head);
	add_at_begin(&head);	
	
	print_node(head);
	reverse_print(head);
}
