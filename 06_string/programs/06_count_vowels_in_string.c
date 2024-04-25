/* write a c program to count vowels in string

Ex: input : s[20] = "abc pqr aeio"

    ouput : vowels count = 4

*/

#include<stdio.h>

int find_vowels(char *s){

	int i = 0, c = 0;

	while(s[i]){
	
		switch(s[i]){
		
			case 'a' : 

			case 'A' : 

			case 'e' : 

			case 'E' : 

			case 'i' : 

			case 'I' : 

			case 'o' : 

			case 'O' : 

			case 'u' :

			case 'U' : 

				  c++;		
		}

		i++;	
	}
	
	return c++;
}

int main(){

	char s[30];

	printf("\nEnter the string : ");

	scanf(" %[^\n]", s);

	int c = find_vowels(s);

	printf("\nvowels count = %d\n", c);

	return 0;
}
