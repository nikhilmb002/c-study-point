/* write a c program to reverse all words in string 
 
Ex : input  : abcd efgh ijkl

     output : dcba hgfe lkji

*/

#include<stdio.h>

#include<string.h>

char * reverse_words(char *s){

	int l = strlen(s), i, j = 0, k;

	for(i = 0; i <= l; i++){
	
		if(s[i] == ' ' || s[i] == '\0'){
		
			for(k = i - 1, j; k > j; k--, j++){
			
				char t = s[k];

				s[k] = s[j];

				s[j] = t;
			}
		
			j = i + 1;
		}
	
	}

	return s;
}

int main(){

	char s[30];

	printf("\nEnter the string : ");

	scanf(" %[^\n]", s);

	reverse_words(s);

	printf("\n%s\n", s);

	return 0;
}
