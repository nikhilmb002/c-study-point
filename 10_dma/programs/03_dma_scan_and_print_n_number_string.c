/* write a c program to allocate dynamic memory for n number of strings scan it and print it. Take n variable value at runtime */

#include<stdio.h>

#include<stdlib.h>

int main(){
	
	int i, n;

	printf("\nEnter the number of strings : ");

	scanf("%d", &n);

	char **p;

	p = malloc(sizeof(char *)*n);

	for(i = 0; i < n;  i++)

		p[i] = malloc(sizeof(char) * 10);


	for(i = 0; i < n; i++){

		printf("\nEnter string %d : ", i + 1);

		scanf("%s", p[i]);

	}

	printf("\n\n");

	for(i = 0; i < n; i++)

		printf("%s\n", p[i]);

	return 0;
}
