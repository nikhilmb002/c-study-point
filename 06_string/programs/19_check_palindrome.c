/* write a c program to check the string is palindrome or not 
 
Ex : input  : s[20] = "radar"

     output : yes

*/

#include<stdio.h>

int find_palindrome(char *s){

	int i = 0, j, l = 0, flag = 0;

	while(s[l++]);

	l--;

	for(i = 0, j = l - 1; j > i; i++, j--){
	
			if(s[i] != s[j]){

				flag = 1;

				break;
			}
	}

	return (flag == 1) ? 0 : 1;
}

int main(){

	char s[20];

	printf("\nEnter the string : ");

	scanf(" %[^\n]", s);

	int c = find_palindrome(s);

	c == 1 ? printf("\nYes, palindrome\n") : printf("\nNot palindrome\n");

	return 0;
}
