/* c program to print binary format of the given input number */

#include<stdio.h>

int main(void){

	int num, pos = 31;

	printf("Enter the number : ");

	scanf("%d", &num);

	printf("\nBinary : ");

L1: 

	printf("%d", num >> pos & 1);

	pos--;

	if(pos >= 0)

		goto L1;

	printf("\n");

	return 0;
}
