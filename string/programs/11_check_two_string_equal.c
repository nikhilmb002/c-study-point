/* write a c program to check the given two strings are equal or not */

#include<stdio.h>

int main(){

	int i;

	char s1[10], s2[10];

	printf("Enter the 1st string : ");

	scanf(" %s", s1);

	printf("\nEnter the 2nd string : ");

	scanf(" %s", s2);

	for(i = 0; s1[i]; i++){
	
		if(s1[i] != s2[i])

			break;	
	}
	
	if(s1[i] == s2[i])

		printf("\nStrings are equal\n");

	else

		printf("\nStrings are not equal\n");

	return 0;
}
