/* c program ro count the number of digits in a given input number */

#include<stdio.h>

int main(void){

	int num, c = 0;

	printf("Enter the number : ");

	scanf("%d", &num);

L1: 

	num = num / 10;

	c++;

	if(num)

		goto L1;

	printf("\nCount = %d\n", c);

	return 0;
}
