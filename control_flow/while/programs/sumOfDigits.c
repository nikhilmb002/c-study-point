/* c program that finds the sum of digits of a given number using a while loop */

#include<stdio.h>

int main(void){

	int num, sum = 0;

	printf("Enter the number : ");

	scanf("%d", &num);

	while(num != 0){

		sum +=  (num % 10);	

		num /= 10;

	}

	printf("\nsum = %d\n", sum);

	return 0;
}
