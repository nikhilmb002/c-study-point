/* c program to print the given string character by character */

#include<stdio.h>

int main(void){

	char s[10];

	int i;

	printf("Enter the string : ");

	scanf("%s", s);

	printf("\n");

	for(i = 0; s[i]; i++)

		printf("%c ", s[i]);

	printf("\n");

	return 0;
}
