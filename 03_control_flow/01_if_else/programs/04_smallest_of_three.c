/* c program to find smallest number among three number */

#include<stdio.h>

int main(void){

	int num1, num2, num3;

	printf("Enter the first number : ");

	scanf("%d", &num1);

	printf("\nEnter the second number : ");

	scanf("%d", &num2);

	printf("\nEnter the third number : ");

	scanf("%d", &num3);

	if(num1 <= num2 && num1 <= num3)

		printf("\n%d is smallest\n", num1);

	else if(num2 <= num1 && num2 <= num3)

		printf("\n%d is smallest\n", num2);

	else
		printf("\n%d is smallest", num3);

	return 0;
}
