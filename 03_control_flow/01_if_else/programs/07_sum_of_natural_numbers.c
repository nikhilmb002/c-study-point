/* c program to calculate sum of n natural number */

#include<stdio.h>

int main(void){

	int n, sum = 0;

	printf("\nEnter a positive integer : ");

	scanf("%d", &n);

	if(n <= 0){
	
		printf("\nEnter positive integer.\n");
	
		return 1;	
	}

	sum = n * (n + 1) / 2;

	printf("\nsum of the first %d natural numbers = %d\n", n, sum);

	return 0;
}
