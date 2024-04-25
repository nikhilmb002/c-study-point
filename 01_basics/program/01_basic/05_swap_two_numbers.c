/* c program to swap two numbers */

#include<stdio.h>

int main(void){

	int num1, num2, temp;

	printf("Enter the first number : ");

	scanf("%d", &num1);

	printf("\nEnter the second number : ");

	scanf("%d", &num2);

	printf("\nBefore swapping : ");

	printf("num1 = %d  ", num1);

        printf("num2 = %d", num2);

	temp = num1;

	num1 = num2;

	num2 = temp;

//	num1 = num1 + num2 - (num2 = num1);  // one line logic for swapping two numbers without temp variable

	printf("\nAfter  swapping : ");

	printf("num1 = %d  ", num1);

	printf("num2 = %d\n", num2);
	
	return 0;
}
