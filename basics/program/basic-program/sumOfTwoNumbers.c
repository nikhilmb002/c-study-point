/* c program to find sum of two integers */

#include<stdio.h>

int main(void){

	// declare variable to store two integer & sum

	int num1, num2, sum ;

	// prompt user to enter first number

	printf("Enter the first number  : ");

	//read the first number

	scanf("%d", &num1);

	// prompt user to enter second number

	printf("\nEnter the second number : ");	

	// read the second number

	scanf("%d", &num2);

	// calculate sum of the two numbers

	sum = num1 + num2;

	// print the result

	printf("\n%d + %d = %d\n", num1, num2, sum);

	// return statement with 0 indicates successful execution 
							
	return 0;	
}
