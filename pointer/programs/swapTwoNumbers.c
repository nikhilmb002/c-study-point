/* c program to swap two numbers using pointers */

#include<stdio.h>

int main(void){

	int num1, num2;

	printf("Enter num1 : ");

	scanf("%d", &num1);

	printf("\nEnter num2 : ");

	scanf("%d", &num2);

	printf("\nBefore swapping : num1 = %d  num2 = %d\n", num1, num2);

	int *ptr = &num1;

	int temp = *ptr;

	*ptr = num2;

	num2 = temp;

	printf("\nAfter swapping  : num1 = %d  num2 = %d\n", num1, num2);

	return 0;
}
