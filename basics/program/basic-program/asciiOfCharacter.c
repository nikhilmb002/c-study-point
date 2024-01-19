/* c program to print ascii of a character */

#include<stdio.h>

int main(void){

	char ch;

	printf("Enter the character : ");

	scanf("%c", &ch);

	printf("\nAscii of %c = %d\n", ch, ch);

	return 0;
}
