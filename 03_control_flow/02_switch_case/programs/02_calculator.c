/* c program, simple calculator using switch case 

this program takes two numbers and perform basic arithmetic operations based on user input */


#include<stdio.h>

int main(void){

	float num1, num2, res;

	char op;

	printf("Enter first number : ");

	scanf("%f", &num1);

	printf("\nEnter the operator(+, -, *, /): ");

	scanf(" %c", &op);

	printf("\nEnter second number : ");

	scanf("%f", &num2);

	switch(op){
	
		case '+' : 

			res = num1 + num2;

			printf("\nresult = %f\n", res);

			break;


		case '-' : 

			res = num1 - num2;
			
			printf("\nresult = %f\n", res);

			break;


		case '*' : 

			res = num1 * num2;

			printf("\nresult = %f\n", res);

			break;


		case '/' : 

			if(num2 != 0){

				res = num1 / num2;

				printf("\nresult = %f\n", res);
			}

			else
				printf("\nError\n");

			break;	

		default : 

			printf("\nEnter valid operator\n");

	}


}
