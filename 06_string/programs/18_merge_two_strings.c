/* write a c program to merge two string to another string 
 
Ex : input  : s1[10] = "1234" 	s2[10] = "ABCD"

     output : s3[20] = "1A2B3C4D"

*/

#include<stdio.h>

char * string_merge(char *s1, char *s2, char *s3){

	int i = 0, j = 0;

	while(s1[i]){

		s3[i] = s1[i];

		i++;
	}

	while(s2[j]){

		s3[i + j] = s2[j];
		
		j++;
	}

	s3[i + j] = '\0';

	return s3;

}

int main(){

	char s1[10], s2[10], s3[20];

	printf("\nEnter the string one : ");

	scanf(" %s", s1);

	printf("\nEnter the string two : ");

	scanf(" %s", s2);

	string_merge(s1, s2, s3);

	printf("\n%s\n", s3);
}
