/* write a c program to delete one specific character from given string */

#include<stdio.h>

int main(){

	int i, j;

	char s[20], ch;

	printf("Enter the string : ");

	scanf(" %s", s);

	printf("\nEnter the char  : ");

	scanf(" %c", &ch);

	printf("\nBefore : %s\n", s);

	for(i = 0; s[i]; i++){
	
		if(s[i] == ch){
		
			for(j = i; s[j]; j++)

				s[j] = s[j+1];

			i--;
		}
	}
	
	printf("\nAfter  : %s\n", s);

	return 0;
}
