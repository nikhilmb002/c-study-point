/* c program to check a specific bit of a number */

#include<stdio.h>

int main(void){

	int num, pos;

	printf("Enter the number   : ");

	scanf("%d", &num);

	printf("\nEnter the position : ");

	scanf("%d", &pos);

	num & 1 << pos ? printf("\nBit is set\n") : printf("\nBit is clear\n");

	return 0;	
}
