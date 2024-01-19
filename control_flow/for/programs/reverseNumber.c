/* c program to reverse a number */

#include<stdio.h>

int main(void){

	int num, rem, rev = 0;

	printf("Enter the number : ");

	scanf("%d", &num);

	for( ; num != 0; num /= 10){

		rem = num % 10;
	
		rev = rev * 10 + rem;	
	}

	printf("\nreversed number = %d\n", rev);

	return 0;
}
