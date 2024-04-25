/* c program to display multiplication table of given input number using goto */


#include<stdio.h>

int main(void){

	int num, i = 1;

	printf("Enter the number : ");

	scanf("%d", &num);

	printf("\n");

L1: 
	
	printf("%2d * %2d = %3d\n", num, i, num * i);

	i++;

	if(i <= 10)

		goto L1;

	return 0;
}


