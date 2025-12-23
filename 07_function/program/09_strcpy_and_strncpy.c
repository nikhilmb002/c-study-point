/* write a program for user defined strcpy and strncpy */

#include <stdio.h>
char *my_strcpy(char *, const char *);
char *my_strncpy(char *, const char *, size_t);
int main() {
	
	char src[10], dest[10];
	printf("Enter the string : ");
	scanf("%s", src);
	my_strcpy(dest, src);	
	printf("After copy: %s\n", dest);	
	my_strncpy(dest, src, 3);
	printf("After copy: %s\n", dest);
	return 0;
}

char *my_strcpy(char *dest, const char *src) {

	int i = 0;
	while (src[i]) {

		dest[i] = src[i];
		i++;
	}
		
	dest[i] = 0;		
	return dest;
}

char *my_strncpy(char *dest, const char *src, size_t n) {

	int i = 0;	
	while (i < n && src[i]) {
		
		dest[i] = src[i];
		i++;
	}

	dest[i] = 0;
	return dest;
}
