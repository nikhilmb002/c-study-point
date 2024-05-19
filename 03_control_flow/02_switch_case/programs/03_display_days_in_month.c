/* c program to display number of a days in a given month */

#include<stdio.h>

int main(void){

	int month;

	printf("Enter the month number 1 to 12 : ");

	scanf("%d", &month);

	switch(month){

		case 1  : 

		case 3  : 

		case 5  : 

		case 7  : 

		case 8  : 

		case 10 :

		case 12 : 

			printf("\n31 days\n");

			break;

		case  2 : 

			printf("\nEnter the year : ");

			int year;

			scanf("%d", &year);

			if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))

				printf("\n29days\n");

			else
				printf("\n28days\n");

			break;

		case 4  : 

		case 6 	: 

		case 9  : 

		case 11 : 

			printf("\n30 days\n");

			break;

		default : 

			printf("\nEnter valid input\n");

		return 0;

	}
}
