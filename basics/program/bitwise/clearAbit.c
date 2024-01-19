/* c program to clear a specified bit in a number */

#include<stdio.h>

int main(void){

	int num, pos;

	printf("Enter the number  : ");

	scanf("%d", &num);

	printf("\nEnter the position : ");

	scanf("%d", &pos);

	printf("\nBefore clearing bit : %d\n", num);

	num = num & ~ (1 << pos); // clear the bit at the specified position (pos) in the number(num)

	printf("\nAfter clearing bit  : %d\n", num);

	return 0;
}


