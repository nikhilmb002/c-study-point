/* write a c program to delete desired char only two times from string 
 
Ex:  input : s[20] = "accbccab" 	char = c

     ouput : abccab

*/

#include<stdio.h>

char* delete_char(char *s, char ch){

	int i, l = 0, j, c = 0;

	while(s[l++]);

	l--;

	for(i = 0; i < l; i++){
	
		if(s[i] == ch && c < 2){
		
			for(j = i; j < l; j++)

				s[j] = s[j+1];

			s[j] = 0;

			c++;	
			
			i--;
		}
	}

	return s;
}

int main(){

	char s[20], c;

	printf("\nEnter the string : ");

	scanf("%s", s);

	printf("\nchar : ");

	scanf(" %c", &c);

        delete_char(s, c);

	printf("\n%s\n", s);

	return 0;
}
