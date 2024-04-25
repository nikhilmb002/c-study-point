/* c program to print the given string in reverse order */

#include<stdio.h>

int main(void){

	char s[10];

	int i, l = 0;

	printf("Enter the character : ");

	scanf("%s", s);

	printf("\n");

	while(s[l++]);

	for(i = l - 2; i >= 0; i--)

		printf("%c", s[i]);

	printf("\n");
	
	return 0;
}
