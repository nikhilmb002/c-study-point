/* write a c program to check the given year is leap year or not */

#include<stdio.h>

int main(void){

	int year;

	printf("Enter year : ");

	scanf("%d", &year);

	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))

		printf("\n%d is a leap year\n", year);

	else

		printf("\n%d is not a leap year\n", year);

	return 0;
}
