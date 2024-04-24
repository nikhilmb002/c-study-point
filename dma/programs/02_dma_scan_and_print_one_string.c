/* write a c program to allocate dynamic memory for one string , scan it and print it */


#include<stdio.h>

#include<stdlib.h>

int main(){

	char *p;

	p = malloc(sizeof(char)*10);

	printf("Enter the string : ");

	scanf("%s", p);

	printf("\n%s\n", p);

	return 0;
}
