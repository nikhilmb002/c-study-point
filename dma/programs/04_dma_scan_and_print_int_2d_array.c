/* write a c program to allocate dynamic memory for integer 2D array scan it and print it. Take no.of rows and columns from user */

#include<stdio.h>

#include<stdlib.h>

int main(){

	int **p;

	int r, c, i, j;

	printf("Enter the no.of rows : ");

	scanf("%d", &r);

	printf("Enter the no.of cols : ");

	scanf("%d", &c);

	p = malloc(sizeof(int)*c);

	for(i = 0; i < r; i++)

		p[i] = malloc(sizeof(int)*c);

	for(i = 0; i < r; i++){
	
		for(j = 0; j < c; j++){
		
			printf("Enter %d %d element : ", i, j);				
			
			scanf("%d", &p[i][j]);

			printf("\n");
		}
	}

	printf("\n");

	for(i = 0; i < r; i++){
	
		for(j = 0; j < c; j++)

			printf("%d ", p[i][j]);

		printf("\n");	
	}
}
