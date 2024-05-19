/* c program that takes grades as input and display the corresponding grade point */

#include<stdio.h>

int main(void){

	char grade;

	printf("Enter grade (S, A, B, C, D) : ");

	scanf("%c", &grade);

	switch(grade){
	
		case 'S' : 

			printf("\ngrade point for %c is 10\n", grade);

			break;

		case 'A' : 

			printf("\ngrade point for %c is 8.5\n", grade);

			break;

		case 'B' : 

			printf("\ngrade point for %c is 7.5\n", grade);

			break;

		case 'C' :

			printf("\ngrade point for %c is 6.5\n", grade);

			break;

		case 'D' : 

			printf("\ngrade point for %c is 6\n", grade);

			break;	
	}
}
