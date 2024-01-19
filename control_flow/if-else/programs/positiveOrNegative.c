/* c program to check the given number is positive or not */

#include<stdio.h>

int main(void){

	int num;

	printf("Enter the number : ");
	
	scanf("%d", &num);

	if(num < 0)

		printf("\n%d is negative\n", num);

	else
		printf("\n%d is positive\n", num);

	return 0;
}
