/* write a c program to remove conjuctive spaces in string 
 
Ex : input  : s[20] = "abc   def   ghi"

     output : abc def ghi

*/

#include<stdio.h>

char *remove_space(char *s){

	int i, j, l = 0;

	while(s[l++]);

	l--;

	for(i = 0; i < l - 1; i++){
	
		if(s[i] == ' ' && s[i + 1] == ' '){
		
			for(j = i; j < l; j++)
				
				s[j] = s[j + 1];

			s[j] = 0;

			i--;		

			l--;
		}	
	}

	return s;
}

int main(){

	char s[20];

	printf("\nEnter the string : ");

	scanf(" %[^\n]", s);

	remove_space(s);

	printf("%s", s);

	return 0;
}
