/* write a c program to print right half pyramid */

#include<stdio.h>

int main(){

	int i, j, n;

	printf("\nEnter the no.of rows : ");

	scanf("%d", &n);

	printf("\n\n");

	for(i = 0; i < n; i++){
	
		for(j = 0; j <= i; j++)

			printf("* ");

		printf("\n");	
	}

	return 0;
}

