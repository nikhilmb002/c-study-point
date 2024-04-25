/* write a c program to copy one string into the another string */

#include<stdio.h>

int main(){

	int i;

	char src[10], dest[20];

	printf("Enter the string : ");

	scanf("%s", src);

	printf("\nBefore src : %s  dest : %s\n", src, dest);

	for(i = 0; src[i]; i++)
	
		dest[i] = src[i];

	dest[i] = 0;

	printf("\nAfter  src : %s  dest : %s\n", src, dest);

	return 0;
}
