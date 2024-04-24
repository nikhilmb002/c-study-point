/* write a c program to allocate dynamic memory for five number of integers , scan it and print it */

#include<stdio.h>

#include<stdlib.h>

int main(){

	int *p, i;	// 8 + 4 = 12 bytes memory allocated statically 

	p = malloc(sizeof(int) * 5);	// 5 * 4 = 20 bytes memory allocated dynamically 

	printf("\nEnter five integer\n");

	for(i = 0; i < 5; i++)

		scanf("%d", &p[i]);

	printf("\n");

	for(i = 0; i < 5; i++)

		printf("%d ", p[i]);

	printf("\n");
}
