/* write a c program to check the given numbers are equal or not */

#include<stdio.h>

int main(){

	int n1, n2;

	printf("Enter the first number  : ");

	scanf("%d", &n1);

	printf("\nEnter the second number : ");

	scanf("%d", &n2);

	n1 ^ n2 ? printf("\nNot equal\n") : printf("\nequal\n");

	return 0;
}
