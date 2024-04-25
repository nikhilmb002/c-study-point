/* c program to find the length of the given string */

#include<stdio.h>

int main(void){

	char s[10];

	int i = 0;

	printf("Enter the string : ");

	scanf("%s", s);

	while(s[i++]);

	printf("\nThe length of the string %s = %d\n", s, i - 1);

	return 0;
}
