/* c program to count how many bits are set in a given integer number */

#include<stdio.h>

int main(void){

	int num, pos = 0, c = 0;

	printf("Enter the number : ");

	scanf("%d", &num);

L1: 

	if(num & 1 << pos)

		c++;

	pos++;

	if(pos <= 31)

		goto L1;

	printf("\nNo.of bits set = %d clear = %d\n", c, 32-c);

	return 0;
}
