/* write a c program to print the inverted left half pyramid */

#include<stdio.h>

int main(){

	int i, j, n;

	printf("Enter the no.of rows : ");

	scanf("%d", &n);

	printf("\n");

	for(i = 0; i < n; i++){
	
		for(j = 0; j < i; j++)

			printf("  ");

		for(j = 0; j < n - i; j++)

			printf("* ");

		printf("\n");	
	}


	return 0;
}
