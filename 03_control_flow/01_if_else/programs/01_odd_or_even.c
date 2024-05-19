/* c program to check the given number is odd or even */

#include<stdio.h>

int main(void){

	int num;

	printf("Enter the number : ");

	scanf("%d", &num);

	if(num % 2 == 0)

		printf("\n%d is even\n", num);

	else
		printf("\n%d is odd\n", num);

	return 0;
}
