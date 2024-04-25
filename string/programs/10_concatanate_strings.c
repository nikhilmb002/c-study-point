/* write a c program to concatanate the given strings */

#include<stdio.h>

int main(){

	int i, j, l;

	char src[10], dest[20];

	printf("Enter src string   : ");

	scanf(" %s", src);

	printf("\nEnter dest string  : ");

	scanf(" %s", dest);

	printf("\nBefore src : %s  dest : %s\n", src, dest);

	for(l = 0; dest[l]; l++);

	for(i = 0, j = l; src[i]; i++, j++)

		dest[j] = src[i];

	dest[j] = '\0';

	printf("\nAfter src : %s  dest : %s\n", src, dest);

	return 0;
}


