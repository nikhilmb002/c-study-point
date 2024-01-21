/* c program to scan the elements of an integer array and print it */

#include<stdio.h>

int main(void){
	
	int a[5], i, ele;

	ele = sizeof(a) / sizeof(a[0]);

	for(i = 0; i < ele; i++){

		printf("\nEnter element at %d : ", i);

		scanf("%d", &a[i]);
	}

	printf("\na[%d] = ", ele);

	for(i = 0; i < ele; i++)

		printf("%d ",a[i]);

	printf("\n");

	return 0;	
}
