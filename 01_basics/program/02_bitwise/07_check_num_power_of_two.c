/* c program to check the number is power of two or not */

#include<stdio.h>

int main(void){

	int num;

	printf("Enter the number : ");

	scanf("%d", &num);

	num & num - 1 ? printf("\nNot a power of two\n") : printf("\nYes power of two\n");

	return 0;
}
