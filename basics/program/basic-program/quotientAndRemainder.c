/* c program to find quotient and remainder */

#include<stdio.h>

int main(void){

	int dividend, divisor, rem, quo;

	printf("Enter the dividend : ");

	scanf("%d", &dividend);

	printf("\nEnter the divisor : ");

	scanf("%d", &divisor);

	quo = dividend / divisor;

	rem = dividend % divisor;

	printf("\nQuotient : %d\n", quo);

	printf("\nRemainder : %d\n", rem);

	return 0;
}
