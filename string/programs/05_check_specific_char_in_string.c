/* c program to check one specific character is present or not in a given string */

#include<stdio.h>

int main(void){

	char s[20], ch, i = 0;

	printf("Enter the string    : "); 

	scanf("%s", s);

	printf("\nEnter the character : ");

	scanf(" %c", &ch);

	while(s[i]){
	
		if(s[i] == ch){
		
			printf("\n%c is present \n", ch);

			return 1;		
		}

		i++;
	}

	printf("\nNot present\n");

	return 0;
}
