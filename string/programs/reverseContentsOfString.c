/* c program to reverse contents of a string */

#include<stdio.h>

int main(void){

	char s[10];

	int i, l = 0, j, temp;

	printf("Enter the string : ");

	scanf("%s", s);

	while(s[l++]);

	for(i = 0, j = l - 2; i < j; i++, j--){
	
		temp = s[i];

		s[i] = s[j];

		s[j] = temp;
	}
	
	printf("\nreversed string  : %s\n", s);
}
