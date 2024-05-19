/* c program to checks the type of character */

#include<stdio.h>

int main(void){

	char ch;

	printf("Enter a character : ");
	
	scanf("%c", &ch);

	if(ch >= 'A' && ch <= 'Z')

		printf("\n%c is an uppercase letter\n", ch);

	else if (ch >= 'a' && ch <= 'z')

		printf("\n%c is an lowercase letter\n", ch);

	else if(ch >= '0' && ch <= '9')

		printf("\n%c is a digit\n", ch);

	else
		printf("\n%c is a special character\n", ch);

	return 0;
}
