/* Design a function in c to find the length of the given string */

#include<stdio.h>

int my_strlen(char *s){

	int l = 0;

	while(s[l++]);

	return --l;

}

int main(){
	
	int l;

	char s[10];

	printf("\nEnter the string : ");

	scanf("%s", s);

	l = my_strlen(s);

	printf("\nLength = %d\n", l);

	return 0;
}
