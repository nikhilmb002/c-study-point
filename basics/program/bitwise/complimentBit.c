/* c program to compliment a specified bit of a number */

#include<stdio.h>

int main(void){

	int num, pos;

	printf("Enter the number   : ");

	scanf("%d", &num);

	printf("\nEnter the position : ");

	scanf("%d", &pos);

	printf("\nBefore complimenting bit : %d\n", num);

	num = num ^ 1 << pos;

	printf("\nAfter complimenting bit  : %d\n", num);

	return 0;
}
