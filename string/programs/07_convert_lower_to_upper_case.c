/* write a c program to covert string from lower case to upper case */

#include<stdio.h>

int main(){

	int i;

	char s[10];

	printf("\nEnter the string : ");

	scanf("%s", s);

	for(i = 0; s[i]; i++){
	
		if(s[i] >= 'a' && s[i] <= 'z')

			s[i] = s[i] - 32;

	}

	printf("\nAfter : %s\n", s);

	return 0;
}
