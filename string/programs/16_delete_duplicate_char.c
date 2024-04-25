/* write a c program to delete duplicate char from string 
	
Ex: input  : s[20] = "abc abc ppp 122"

    ouput  : abc p12

*/

#include<stdio.h>

char * delete_duplicate(char *s){

	int i, j, l = 0;

	while(s[l++]);

	l--;

	for(i = 0; i < l; i++){
	
		for(j = i + 1; j < l;){

			if(s[i] == s[j]){

				for(int k = j; k < l; k++)
		
					s[k] = s[k+1];

				l--;

				i--;
			}

			else
				j++;
		}	
	}

	s[l] = 0;

	return s;
}

int main(){

	char s[20];

	printf("\nEnter the string : ");

	scanf("%[^\n]", s);
	
	delete_duplicate(s);

	printf("\n%s\n", s);

	return 0;
}
