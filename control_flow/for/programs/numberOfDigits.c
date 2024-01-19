/* c program to count number of digits in a given number */


#include<stdio.h>

int main(void){

	int num, count;

	printf("Enter the number : ");
	
	scanf("%d", &num);

	for(count = 0; num != 0; num /= 10, count++);
	
	printf("\nCount = %d\n", count);

	return 0;
}
