/* c program to print even numbers in a given range */

#include<stdio.h>

int main(void){

	int start, end, num;

	printf("Enter the start : ");

	scanf("%d", &start);

	printf("\nEnter the end   : ");

	scanf("%d", &end);

	printf("\n");

	for(num = start; num <= end; num++)
	
		if(num % 2 == 0)

			printf("%d  ",num);

	printf("\n");

	return 0;
}





