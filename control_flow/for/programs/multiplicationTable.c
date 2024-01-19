/* c program to generate multiplication table of a given number */

#include<stdio.h>

int main(void){

	int num, i;

	printf("Enter the number : ");

	scanf("%d", &num);

	printf("\n");

	for(i = 1; i <= 10; i++){
	
		printf("%d * %2d = %3d\n", num, i, num * i);
	
	}
	
	return 0;
}
