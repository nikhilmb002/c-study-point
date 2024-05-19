/* write a c program to calculate the factorial of a number using a do-while loop */

#include<stdio.h>

int main(){

	int num, fact = 1, i = 1;

	printf("Enter the number : ");

	scanf("%d", &num);

	if(num < 0){
	
		printf("\n Factorial of a negative  number is undefined\n");

		return 1;	
	}

	do{
	
		fact *= i;

		i++;

	} while (i <= num);
	
	printf("Factorial of %d = %d\n", num, fact);

	return 0;
}
