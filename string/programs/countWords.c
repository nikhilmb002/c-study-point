/* write a c program to count number of words in a given string
 
input : s[20] = "abc pqr xyz 12"

output : word count = 4
 
*/

#include<stdio.h>

int find_count(char *s){

	int c = 0, i = 0;

	while(s[i]){
	
		if(s[i] == ' ' && s[i+1] != ' '){
		
			c++;		
		}

		i++;	
	}

	return c+1;
}


int main(){

	char s[30];

	printf("\nEnter the string : ");

	scanf("%[^\n]",s);

	int c = find_count(s);

	printf("\nword count = %d\n", c);

	return 0;
}
